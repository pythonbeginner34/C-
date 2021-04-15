#define  _CRT_SECURE_NO_WARNINGS 1

//1.实现一个通讯录，存放好友信息-1000个好友信息
//名字 电话 性别 住址 年龄
//2.增加好友信息
//3.删除指定名字的好友信息
//4.查找好友信息
//5.修改好友信息
//6.打印好友信息
//7.排序

#include<stdio.h>

# define MAX 1000




//#define MAX_NAME 20
//#define MAX_SEX 5
//#define MAX_TELE 12
//#define MAX_ADDER 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};

enum S
{
	MAX_NAME = 20,
	MAX_SEX = 5,
	MAX_TELE = 12,
	MAX_ADDER = 30,
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDER];
};

struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已有的元素个数
};

//声明函数
//初始化通讯录函数
void InitContact(struct Contact* ps);
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//打印通讯录中的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定联系人信息
void SearchContact(const struct Contact* ps);
//修改指定联系人的信息
void ModifyContact(const struct Contact* ps);
//排序
void SortContact(struct Contact* ps);