//针对复杂对象- 创建自定义类型：结构体，枚举， 联合体
//1.结构体
//结构体声明

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别+年龄
//#include<stdio.h>

//struct stu
//{
//	char name[20];
//	char tell[12];
//	char sex[10];
//	int age;
//	//结构体成员变量
//}s4,s5,s6;//搜是全局的结构体变量
//
//
////匿名结构体变量
////只能在声明结构体时创建结构体变量
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//
//int main()
//{
//	//创建结构体变量
//	//局部的结构体变量
//	struct stu s1;
//}

//错误示范
//结构体内部不能包含自身结构体
//struct Node
//{
//	int data;
//	struct Node n;
//};

//结构体正确自引用方法
//存放的是下一个节点的地址
//存放数据的叫数据域
//存放指针的叫指针域
//struct Node
//{
//	int data;
//	struct Node* next;
//};

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体变量的初始化

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//#include<stdio.h>
//
//int main()
//{
//	struct S s = { 'c',{55.6, 30}, 100, 3.14, "hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf %d\n", s.st.weight, s.st.age);
//	return 0;
//}

//结构体内存对齐

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//#include<stdio.h>
//int main()
//{
//	struct S s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//
//	return 0;
//}
//1.第一格成员在与结构体变量偏移量为零的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值
//vs中默认的值为8
//3.结构体总大小为最大对齐数（每个成员边梁都有一个对齐数）的整数倍
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐的整数倍处，
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//
//#include<stdio.h>
//int main()
//{
//	struct S3 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//16
//	struct S4 s = { 0 };
//	printf("%d\n", sizeof(s));//32
//
//	return 0;
//}

////设置默认对齐数
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//
//#pragma pack()
////取消设置的默认对齐数
//#include<stdio.h>
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
#include<stdio.h>
#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();
//	//计算结构体成员相对于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

//传值
 void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
 //传址
 void Print2(const struct S* tem)
{
	 printf("%d %c %lf\n", tem->a, tem->c, tem->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}