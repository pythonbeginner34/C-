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
	//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
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
	//��ȡ�ļ�,�ŵ�ͨѶ��.
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
		//��������
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2 )* sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			printf("���ݳɹ�\n");
			ps->capacity += 2;
		}
		else
		{
			printf("����ʧ��\n");
		}

	}
}
void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);//��⵱ǰͨѶ¼������
	//����������ӿռ�
	//���δ�������κβ���
	//��������
	printf("����������: >");
	scanf("%s", ps->data[ps->size].name);
	printf("����������: >");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�: >");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰: >");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ: >");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	return -1;//�Ҳ�������-1
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	pos = FindByName(ps, name);
	//�ҵ��˷���Ԫ�����ڵ��±�
	//�Ҳ�����-1
	int i = 0;
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸���ϵ�˵�����\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("����������: >");
		scanf("%s", ps->data[pos].name);
		printf("����������: >");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�: >");
		scanf("%s", ps->data[pos].sex);
		printf("������绰: >");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ: >");
		scanf("%s", ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

void SortContact(struct Contact* ps)
{
	int i = 0;
	int j = 0;
	struct PeoInfo tmp = { 0 };
	//ð������
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
	printf("����ɹ�\n");
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
	//��ʼд�ļ�
	//дͨѶ¼������ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}
	printf("����ɹ�\n");
	fclose(pfwrite);
	pfwrite = NULL;
}