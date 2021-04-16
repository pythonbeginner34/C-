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