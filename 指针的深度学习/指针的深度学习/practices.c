#include<stdio.h>

//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串,常量字符串不能被修改
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

//指针数组 是数组 用来存放指针的

//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//整形指针数组 - 简称指针数组
//	char* pch[5];//存放字符指针的数组 -指针数组
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


//数组指针-指针

//int main()
//{
//	int* p = NULL;//整形指针-指向整形的指针-可以存放整形的地址
//	char* pc = NULL;//字符指针-指向字符的指针-可以存放字符的地址
//	//数组指针-指向数组的指针-可以存放数组的地址
//	
//	//int arr[10] = {0};
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//数组地址要存起来，p就是数组指针
//
//	//int *pl[10]指针数组
//	//int(*p)[10]数组指针
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

//int arr[5];//arr是一个5个元素的整形数组
//int* parr1[10];//parr1是一个拥有10个元素的指针数组 每个元素的类型是int*  parr1是指针数组
//int(*parr2)[10];//parr2是一个指针，该指针指向一个数组，数组有十个元素，每个元素的类型是int parr2是数组指针
//int(*parr3[10])[5];//parr3是一个数组该数组有十个元素，每个元素都是一个数组指针，该数组指针指向的数组有五个元素，每个元素的类型是int

////一维数组的传参
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

//二维数组的传参
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


//函数指针
//数组指针是指向数组的指针
//函数指针是指向函数的指针


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
//	printf("%p\n", &Add);*/ //&函数名和函数名都是函数的地址
//	int(*pa)(int, int) = Add;//函数的储存方式int(*pa)(int,int) = &函数名
//	printf("%d\n", (*pa)(2, 3));//调用函数方法(*pa)(2,3)
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
//	(*p)("hello bit");//可以将字符串传给字符指针，传的是字符串的首地址
//	return 0;
//}

//代码1(*(void(*)())0)() //把0强制转换成：void（*）（）函数指针类型-0就是该函数的地址
//调用0地址处的函数
//代码2 void(*singal(int, void(*)(int)))(int)    
// signal是一个函数声明
// signal函数的参数有两个，第一个是int,第二个是函数指针，该函数指针指向的函数的参数是int，返回类型void
// signal函数的返回类型也是一个函数指针：该指针指向的函数类型是int，返回值是void
//typedef void(*)(int)pfun_t 将函数指针简写为pfun_t 是不可以这样写的 应该写成 typedef void(*pfun_t)(int)
// 简化之后可以写成1
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
//	//int* arr[5];//指针数组
//	//int(*pa)(int,int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}
//
//char* my_strcpy(char* dest, const char* scr);
////写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
////写一个函数指针数组pfArr,能够存放4个my_strcpy函数地址
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
//	//pfArr算是一个函数指针数组-转移表
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出游戏\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} 	while (input);
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数\n");
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
//		printf("请选择：>");
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
//			printf("退出\n");
//		default:
//			printf("输入错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}


//int (*pfArr[4])(int, int);//函数指针数组
//int (*(*pa)[4])(int, int) = &pfArr;//pa是一个指针的，指向的数组有四个元素
////指向数组的每个元素是一个函数指针 函数指针 int(*)(int,int)
////pa是一个指向函数指针数组的指针

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
//	void* p = &a;//void*类型的指针 可以接受任意类型的指针 ,void*类型的指针不能进行解引用操作，void*类型的指针不能进行加减整数操作
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
//	//比较两个整型值的
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
//	int* p1 = &a;//int* 代表p是一个整型指针类型，将a的地址给p，此时p中存放的就是一个整型的地址
//	printf("%d\n", *p1);//*是一个解引用操作符，也叫寻址符，*p代表通过p中存放的地址找到相应的数据
//	*p1= 30;//我们也可以再找到p中地址对应的数据后更改它的值。
//	printf("%d\n", *p1);
//	float b = 3.14f;//浮点型同理
//	float* p2 = &b;//定义一个浮点型指针用于存储浮点型数据的地址
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