//��Ը��Ӷ���- �����Զ������ͣ��ṹ�壬ö�٣� ������
//1.�ṹ��
//�ṹ������

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����ѧ��������-����+�绰+�Ա�+����
//#include<stdio.h>

//struct stu
//{
//	char name[20];
//	char tell[12];
//	char sex[10];
//	int age;
//	//�ṹ���Ա����
//}s4,s5,s6;//����ȫ�ֵĽṹ�����
//
//
////�����ṹ�����
////ֻ���������ṹ��ʱ�����ṹ�����
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
//	//�����ṹ�����
//	//�ֲ��Ľṹ�����
//	struct stu s1;
//}

//����ʾ��
//�ṹ���ڲ����ܰ�������ṹ��
//struct Node
//{
//	int data;
//	struct Node n;
//};

//�ṹ����ȷ�����÷���
//��ŵ�����һ���ڵ�ĵ�ַ
//������ݵĽ�������
//���ָ��Ľ�ָ����
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

//�ṹ������ĳ�ʼ��

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

//�ṹ���ڴ����

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
//1.��һ���Ա����ṹ�����ƫ����Ϊ��ĵ�ַ��
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ
//vs��Ĭ�ϵ�ֵΪ8
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ��������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������

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

////����Ĭ�϶�����
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
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
//	//����ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
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

//��ֵ
 void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
 //��ַ
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