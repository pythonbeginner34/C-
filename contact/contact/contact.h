#define  _CRT_SECURE_NO_WARNINGS 1

//1.ʵ��һ��ͨѶ¼����ź�����Ϣ-1000��������Ϣ
//���� �绰 �Ա� סַ ����
//2.���Ӻ�����Ϣ
//3.ɾ��ָ�����ֵĺ�����Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ
//7.����

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
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ���е�Ԫ�ظ���
};

//��������
//��ʼ��ͨѶ¼����
void InitContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ����ϵ����Ϣ
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ�˵���Ϣ
void ModifyContact(const struct Contact* ps);
//����
void SortContact(struct Contact* ps);