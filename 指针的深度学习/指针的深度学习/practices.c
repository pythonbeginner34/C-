#include<stdio.h>

//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���,�����ַ������ܱ��޸�
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	return 0;
//}

//ָ������ ������ �������ָ���

//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//����ָ������ - ���ָ������
//	char* pch[5];//����ַ�ָ������� -ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//}


//����ָ��-ָ��

//int main()
//{
//	int* p = NULL;//����ָ��-ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	char* pc = NULL;//�ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	//����ָ��-ָ�������ָ��-���Դ������ĵ�ַ
//	
//	//int arr[10] = {0};
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - �����ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//�����ַҪ��������p��������ָ��
//
//	//int *pl[10]ָ������
//	//int(*p)[10]����ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;*/
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(*pa + i));//*pa=arr
	//	\
	//}
	/*for (i = 0; i < 10; i++)
	{
		printf("%d\n", (*pa)[i]);
	}*/
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//			/*printf("%d ", *(*(p + i) + j));*/
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6}, {3,4,5,6,7} };
//	//print1(arr, 3,5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int arr[5];//arr��һ��5��Ԫ�ص���������
//int* parr1[10];//parr1��һ��ӵ��10��Ԫ�ص�ָ������ ÿ��Ԫ�ص�������int*  parr1��ָ������
//int(*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ�ص�������int parr2������ָ��
//int(*parr3[10])[5];//parr3��һ�������������ʮ��Ԫ�أ�ÿ��Ԫ�ض���һ������ָ�룬������ָ��ָ������������Ԫ�أ�ÿ��Ԫ�ص�������int

////һά����Ĵ���
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void rest(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int**arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//��ά����Ĵ���
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])//err
////{}
//void test3(int* arr)//err
//{}
//void test4(int** arr)
//{}
//void test5(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	test4(arr);
//	test5(arr);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}


//����ָ��
//����ָ����ָ�������ָ��
//����ָ����ָ������ָ��


//int Add(int x, int y)
//{
//
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*printf("%p\n", Add);
//	printf("%p\n", &Add);*/ //&�������ͺ��������Ǻ����ĵ�ַ
//	int(*pa)(int, int) = Add;//�����Ĵ��淽ʽint(*pa)(int,int) = &������
//	printf("%d\n", (*pa)(2, 3));//���ú�������(*pa)(2,3)
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello bit");//���Խ��ַ��������ַ�ָ�룬�������ַ������׵�ַ
//	return 0;
//}

//����1(*(void(*)())0)() //��0ǿ��ת���ɣ�void��*����������ָ������-0���Ǹú����ĵ�ַ
//����0��ַ���ĺ���
//����2 void(*singal(int, void(*)(int)))(int)    
// signal��һ����������
// signal�����Ĳ�������������һ����int,�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int����������void
// signal�����ķ�������Ҳ��һ������ָ�룺��ָ��ָ��ĺ���������int������ֵ��void
//typedef void(*)(int)pfun_t ������ָ���дΪpfun_t �ǲ���������д�� Ӧ��д�� typedef void(*pfun_t)(int)
// ��֮�����д��1
//void(*signal(int, void(*)(int)))(int);
//typedef void(*punf_t)(int);
//punf_t signal(int, punf_t);


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int* arr[5];//ָ������
//	//int(*pa)(int,int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}
//
//char* my_strcpy(char* dest, const char* scr);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
////дһ������ָ������pfArr,�ܹ����4��my_strcpy������ַ
//char* (*parr[4])(char*, const char*);


//void menu()
//{
//	printf("*********************\n");
//	printf("*****1.Add  2.Sub***\n");
//	printf("*****3.Mul  4.Div***\n");
//	printf("*******0.exit*****\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr����һ������ָ������-ת�Ʊ�
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������>");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳���Ϸ\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} 	while (input);
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������\n");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", (*pf)(x, y));
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//		default:
//			printf("�������\n");
//		}
//		
//	} while (input);
//	return 0;
//}


//int (*pfArr[4])(int, int);//����ָ������
//int (*(*pa)[4])(int, int) = &pfArr;//pa��һ��ָ��ģ�ָ����������ĸ�Ԫ��
////ָ�������ÿ��Ԫ����һ������ָ�� ����ָ�� int(*)(int,int)
////pa��һ��ָ����ָ�������ָ��

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
	/*for (i = 0; i < sz; i++)*/
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	char* ch = 'w';
//	void* p = &a;//void*���͵�ָ�� ���Խ����������͵�ָ�� ,void*���͵�ָ�벻�ܽ��н����ò�����void*���͵�ָ�벻�ܽ��мӼ���������
//	p = &ch;
//	return 0;
//}

//#include<stdlib.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1  - *(int*)e2;
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//int cmp_struct(const void* e1, const void* e2)
//{
//	return (int)(*())
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5,0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f\n", f[j]);
//	}
//
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangshan",20} , { "list",30 }, { "wangwu",10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	int a = 20;
//	int* p1 = &a;//int* ����p��һ������ָ�����ͣ���a�ĵ�ַ��p����ʱp�д�ŵľ���һ�����͵ĵ�ַ
//	printf("%d\n", *p1);//*��һ�������ò�������Ҳ��Ѱַ����*p����ͨ��p�д�ŵĵ�ַ�ҵ���Ӧ������
//	*p1= 30;//����Ҳ�������ҵ�p�е�ַ��Ӧ�����ݺ��������ֵ��
//	printf("%d\n", *p1);
//	float b = 3.14f;//������ͬ��
//	float* p2 = &b;//����һ��������ָ�����ڴ洢���������ݵĵ�ַ
//	printf("%f", *p2);
// 	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0x11223344;
//	int* pi = &i;
//	*pi = 0;
//
//	int c = 0x11223344;
//	char* pc = &c;
//	*pc = 0;
//	printf("%x\n", i);
//	printf("%x\n", c);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "hello world!";
//	char* str1 = "hello world!";
//	char* str2 = "hello world!";
//	if (arr1 == arr2)
//	{
//		printf("arr1 and arr2 are same.\n");
//	}
//	else
//	{
//		printf("arr1 and arr2 are not same.\n");
//	}
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same.\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void print1_arr(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2_arr(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print1_arr(arr, 3, 5);
//	print2_arr(arr, 3, 5);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a[5] = { 98,84,74,67,59 };
	int b[4] = { 93,92,83,73 };
	int c[6] = { 90,95,64,57,54,70 };
	int d[3] = { 99, 98,78 };
	int* arr[4] = { a,b,c,d };
	printf("%d\n", *(arr[0] + 2));
	printf("%d\n", *(arr[3] + 1));
	printf("%d\n", arr[0][2]);
	printf("%d\n", arr[3][1]);
	return 0;
}