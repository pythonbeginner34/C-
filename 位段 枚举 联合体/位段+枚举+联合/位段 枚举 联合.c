//位段的声明和结构体是类似的，有两个不同：
//位段的成员必须是 int, unsigned int 或 signed int。
//位段的成员后边有一个冒号和一个数字。

//例如
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};


//位段 - 二进制位
#include<stdio.h>
//struct S
//{
//	int a : 2;//2个比特位
//	int b : 5;
//	int c : 10;
//	int d : 30;//数字小于32
//};//47bit- 6个字节*8 = 48个bit
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}

//位段内存分配
//1.位段的成员可以是 int, unsigned int, signed int 或者是char 类型
//2.位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的
//3.位段涉及很多不确定因数，位段是不跨平台的，注重移植的程序应避免使用位段

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//枚举

//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 枚举常量
//	Male = 3,//给常量赋初值，不是改变常量的值
//    Female = 2,
//	Secret = 10,
//};
//
//enum color
//{
//	red,//0
//	green,//1
//	bule,//2
//};


//#define RED 0 
//#define GREEN 1
//#define BULE 2
//int main()
//{
//	//enum Sex s = Male;
//	//enum color c = 0;//不报错不代表是正确的
//	//enum color c = red;
//	int color = RED;
//	//printf("%d %d %d\n", red, green, bule);
//	//printf("%d %d %d\n", Male, Female, Secret);
//	//return 0;
//}

//和#define相比
//1.增加代码的可读性和维护性
//2.和#define定义的标识符相比枚举常量有检查类型，更加严谨
//3.防止命名污染（封装）
//4.使用方便，一次可以定义多个常量

//联合体（共用体）
//联合的特征是这些成员公用一块空间（所以联合也叫共用体）


//union Un
//{
//	char c;//1
//	int i;//4
//};
//联合体变量的大小是最大成员的大小
//联合体成员不能够同时存在
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

int check_sys()
{
	//int a = 1;
	////返回1，输出小端
	////返回2，输出大端
	//return *(char*)&a;
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;//
	return u.c;
}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
	printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	 
 	//低地址 ------------>高地址
	// ...[][][][11][22][33][44][][][][][][][][][][][]...大端存储
	// ...[][][][44][33][22][11][][][][][][][][][][][]...小端存储
	//讨论一个数据，放在内存中存放的字节顺序
	//大小端讨论字节序问题
	//
	return 0;
}