#define _CRT_SECURE_NO_WARNINGS 1
//当前我们知道的内存的使用方式：
//1.创建一个变量
//栈区-局部变量，函数的形参
//堆区-动态内存分配
//静态区- 全局变量，静态变量
//创建一个数组

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
//	struct S arr[50];//50个struct S 类型的数据
//	//想要实现可变长度的数组
//	return 0;
//}
//
////C语言是可以创建变长数组-c99中增加了

//int main()
//{
//	//向内存申请10个整形空间
//	int*p = (int*)malloc(10*sizeof(int));
//	//malloc如果分配成功返回分配地址的首元素地址
//	//否则如果分配失败则返回空指针
//	if (p == NULL)
//	{
//		//打印错误原因的方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	//free释放的空间必须是动态内存分配的
//	free(p);//使用free后虽然释放掉了内存但是p仍然指向原来的地址仍然可以通过p来找到原来的数据
//	//所以释放掉内存后应将指针置空指针
//	p = NULL;
//	return 0;
//}

//calloc

//int main()
//{
//	//malloc(10*sizeof(int));
//	//malloc不去初始化，效率更高。
//	int* p = (int*)calloc(10, sizeof(int));
//	//会初始化空间内容为0。
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
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//
//}

//realloc-调整动态开辟内存空间的大小

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
//	//就是在使用malloc开辟的20个字节的空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//int* p2 = (int*)realloc(p, 40);
//	 int* ptr = (int*)realloc(p, 4000);
//	//realloc函数使用的注意事项
//	//1.如果追加的空间大于开辟空间后面空间的大小(没有足够的空间可以追加)，
//	//则重新开辟一块空间，并将原有数据拷贝回来，满足追加后的空间大小，并将这个地址返回，并且free原来的空间，返回新的地址
//	//2.如果追加空间大小小于或等于原开辟空间大小后面的空间(有足够的空间可以追加)，则直接在其后面追加所要追加的空间，并返回原地址
//	//3.得用一个新的变量来接受realloc函数的返回值，防止因将指针置空，导致原有指针指向地址丢失
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

//常见的动态内存错误
//1.对空指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	//在解引用之前要检查 指针是否为空指针
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟空间的越界访问

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
//		for (i = 0; i < 10; i++)//只开辟了5个整形空间
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//对非动态开辟内存使用free释放
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	/*int* p = (int*)malloc(40);*/
//	//realloc也可以直接开辟空间,等价于malloc前提是realloc传过去的地址是NULL
//	int* p2 = (int*)realloc(NULL, 40);
//	if (p2 != NULL)
//	{
//		return 0;
//	}
//}

//4.使用free释放动态开辟内存的一部分
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
//		*p++ = i;//循环之后p已经不是首元素的地址了
//		/**(p + i) = i;*/
//	}
//	free(p);//free只能从开辟空间首元素开始释放
//	p = NULL;
//	return 0;


//5.对同一块动态内存多次释放
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

//6.动态开辟内存忘记释放（内存泄漏）
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
//	}//开辟的空间p没有及时释放，执行完函数后p就会被销毁，就无法找到p的地址并释放空间
//	//导致内存泄露
//}
//
//int main()
//{
//	test();
//	while (1);
//}

//经典笔试题

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//str以直传的方式传给p,p是str的一份临时拷贝，是函数GetMemory函数的形参，只在函数内部有效
//	//等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
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
//函数存在的问题
//1.运行代码程序会出现崩溃现象
//2.程序出现内存泄漏现象


//改正程序方法1
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

//改正程序方法2
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


//返回栈空间地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//只能在函数内部使用，出了该函数就会被销毁
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
//	*p = 20;//返回栈空间地址的问题
//	return 0;
//}

//int* test()
//{
//	static int a = 10;//通过使用static延长a的生命周期
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//返回栈空间地址的问题
//	printf("%d\n", *p);
//	return 0;
//}
//
////这样写是没有问题的因为malloc创建空间是创建在堆区的
////只要不free就会一直存在
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

//没有释放内存，内存泄漏
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
//	free(str);//free释放str指向的空间后，并不会把str置为空指针，str变成野指针
//	/*str = NULL;*/  //正确改正方法
//	if (str != NULL)
//	{
//		strcpy(str, "world");//ferr提前释放内存导致非法访问
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//柔型数组

//struct S
//{
//	int n;
//	int arr[];//未知大小的数组
//};

//struct S
//{
//	int n;
//	int arr[0];//未知大小的数组-柔型数组成员-数组大小可变
//};

//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//计算数组大小时包含柔性数组，不计算柔型数组大小
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
	//调整大小
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
	//释放内存
	free(ps->arr);//注意要先释放ps-arr否则如果先释放ps的话就找不到ps->arr的地址了
	ps->arr = NULL;
	free(ps);
	ps = NULL;
}//对比柔性数组减少了内存开辟的次数，减少了释放的次数，并避免释放先后导致的错误
//使用柔型数组减少了内存碎片，提高了效率
