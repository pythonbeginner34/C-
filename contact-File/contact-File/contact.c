#define  _CRT_SECURE_NO_WARNINGS 1

# include "contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把文件中已经存放的通讯录中的信息加载到通讯录中
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps);

void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfread = fopen("contact.dat", "rb");
	if (pfread == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//读取文件,放到通讯中.
	while (fread(&(tmp), sizeof(struct PeoInfo), 1, pfread))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	
	fclose(pfread);
	pfread = NULL;
}

 
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增加容量
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2 )* sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			printf("增容成功\n");
			ps->capacity += 2;
		}
		else
		{
			printf("增容失败\n");
		}

	}
}
void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);//检测当前通讯录的容量
	//如果满了增加空间
	//如果未满不作任何操作
	//增加数据
	printf("请输入名字: >");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄: >");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别: >");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话: >");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址: >");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->data[i].name, 
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele, 
				ps->data[i].addr);
		}
	}
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//找不到返回-1
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	pos = FindByName(ps, name);
	//找到了返回元素所在的下标
	//找不返回-1
	int i = 0;
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改联系人的名字\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字: >");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄: >");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别: >");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话: >");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址: >");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");
	}
}

void SortContact(struct Contact* ps)
{
	int i = 0;
	int j = 0;
	struct PeoInfo tmp = { 0 };
	//冒泡排序
	for (i = 0; i < (ps->size) - 1; i++)
	{
		for (j = 0; j < (ps->size) - i - 1; j++)
		{
			int ret = strcmp(ps->data[j].name, ps->data[j + 1].name);
			if (1 == ret)
			{
				tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
	printf("排序成功\n");
}

void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(struct Contact* ps)
{
	FILE* pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	//开始写文件
	//写通讯录里的数据到文件里
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}
	printf("保存成功\n");
	fclose(pfwrite);
	pfwrite = NULL;
}