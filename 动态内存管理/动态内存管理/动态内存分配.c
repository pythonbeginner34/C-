#define _CRT_SECURE_NO_WARNINGS 1
//��ǰ����֪�����ڴ��ʹ�÷�ʽ��
//1.����һ������
//ջ��-�ֲ��������������β�
//����-��̬�ڴ����
//��̬��- ȫ�ֱ�������̬����
//����һ������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr[50];//50��struct S ���͵�����
//	//��Ҫʵ�ֿɱ䳤�ȵ�����
//	return 0;
//}
//
////C�����ǿ��Դ����䳤����-c99��������

//int main()
//{
//	//���ڴ�����10�����οռ�
//	int*p = (int*)malloc(10*sizeof(int));
//	//malloc�������ɹ����ط����ַ����Ԫ�ص�ַ
//	//�����������ʧ���򷵻ؿ�ָ��
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n",*(p+i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	//free�ͷŵĿռ�����Ƕ�̬�ڴ�����
//	free(p);//ʹ��free����Ȼ�ͷŵ����ڴ浫��p��Ȼָ��ԭ���ĵ�ַ��Ȼ����ͨ��p���ҵ�ԭ��������
//	//�����ͷŵ��ڴ��Ӧ��ָ���ÿ�ָ��
//	p = NULL;
//	return 0;
//}

//calloc

//int main()
//{
//	//malloc(10*sizeof(int));
//	//malloc��ȥ��ʼ����Ч�ʸ��ߡ�
//	int* p = (int*)calloc(10, sizeof(int));
//	//���ʼ���ռ�����Ϊ0��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//
//}

//realloc-������̬�����ڴ�ռ�Ĵ�С

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//int* p2 = (int*)realloc(p, 40);
//	 int* ptr = (int*)realloc(p, 4000);
//	//realloc����ʹ�õ�ע������
//	//1.���׷�ӵĿռ���ڿ��ٿռ����ռ�Ĵ�С(û���㹻�Ŀռ����׷��)��
//	//�����¿���һ��ռ䣬����ԭ�����ݿ�������������׷�Ӻ�Ŀռ��С�����������ַ���أ�����freeԭ���Ŀռ䣬�����µĵ�ַ
//	//2.���׷�ӿռ��СС�ڻ����ԭ���ٿռ��С����Ŀռ�(���㹻�Ŀռ����׷��)����ֱ���������׷����Ҫ׷�ӵĿռ䣬������ԭ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ����ֹ��ָ���ÿգ�����ԭ��ָ��ָ���ַ��ʧ
//	 /*int* ptr = (int*)realloc(p, INT_MAX);*/
//	 if (ptr != NULL)
//	 {
//		 p = ptr;
//	 }
//
//	 int i = 0;
//	 for (i = 5; i < 10; i++)
//	 {
//		*(p + i) = i;
//	 }
//	 for (i = 0; i < 10; i++)
//	 {
//		printf("%d\n", *(p + i));
//	 }
//	 return 0;
//}

//�����Ķ�̬�ڴ����
//1.�Կ�ָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//�ڽ�����֮ǰҪ��� ָ���Ƿ�Ϊ��ָ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//ֻ������5�����οռ�
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	/*int* p = (int*)malloc(40);*/
//	//reallocҲ����ֱ�ӿ��ٿռ�,�ȼ���mallocǰ����realloc����ȥ�ĵ�ַ��NULL
//	int* p2 = (int*)realloc(NULL, 40);
//	if (p2 != NULL)
//	{
//		return 0;
//	}
//}

//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;//ѭ��֮��p�Ѿ�������Ԫ�صĵ�ַ��
//		/**(p + i) = i;*/
//	}
//	free(p);//freeֻ�ܴӿ��ٿռ���Ԫ�ؿ�ʼ�ͷ�
//	p = NULL;
//	return 0;


//5.��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	//p = NULL;
//	free(p);
//	return 0;
//}

//6.��̬�����ڴ������ͷţ��ڴ�й©��
//#include<Windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}//���ٵĿռ�pû�м�ʱ�ͷţ�ִ���꺯����p�ͻᱻ���٣����޷��ҵ�p�ĵ�ַ���ͷſռ�
//	//�����ڴ�й¶
//}
//
//int main()
//{
//	test();
//	while (1);
//}

//���������

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//str��ֱ���ķ�ʽ����p,p��str��һ����ʱ�������Ǻ���GetMemory�������βΣ�ֻ�ں����ڲ���Ч
//	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}
//�������ڵ�����
//1.���д���������ֱ�������
//2.��������ڴ�й©����


//�������򷽷�1
//void GetMemory(char** p)
//{
//	char* tmp = NULL;
//	tmp = (char*)malloc(100);
//	if (tmp != NULL)
//	{
//		*p = tmp;
//	}
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
// free(str);
// str = NULL;
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}

//�������򷽷�2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	if (p != NULL)
//	{
//		return p;
//	}
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//ֻ���ں����ڲ�ʹ�ã����˸ú����ͻᱻ����
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//����ջ�ռ��ַ������
//	return 0;
//}

//int* test()
//{
//	static int a = 10;//ͨ��ʹ��static�ӳ�a����������
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//����ջ�ռ��ַ������
//	printf("%d\n", *p);
//	return 0;
//}
//
////����д��û���������Ϊmalloc�����ռ��Ǵ����ڶ�����
////ֻҪ��free�ͻ�һֱ����
//int* test()
//{
//	int* str = (int*)malloc(100);
//	return str;
//}
//
//int main()
//{
//	int* p = test();
//	free(p);
//	p = NULL;
//	return 0;
//}

//û���ͷ��ڴ棬�ڴ�й©
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��Ϊ��ָ�룬str���Ұָ��
//	/*str = NULL;*/  //��ȷ��������
//	if (str != NULL)
//	{
//		strcpy(str, "world");//ferr��ǰ�ͷ��ڴ浼�·Ƿ�����
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��������

//struct S
//{
//	int n;
//	int arr[];//δ֪��С������
//};

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С������-���������Ա-�����С�ɱ�
//};

//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//���������Сʱ�����������飬���������������С
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);//ע��Ҫ���ͷ�ps-arr����������ͷ�ps�Ļ����Ҳ���ps->arr�ĵ�ַ��
	ps->arr = NULL;
	free(ps);
	ps = NULL;
}//�Ա���������������ڴ濪�ٵĴ������������ͷŵĴ������������ͷ��Ⱥ��µĴ���
//ʹ����������������ڴ���Ƭ�������Ч��
