//λ�ε������ͽṹ�������Ƶģ���������ͬ��
//λ�εĳ�Ա������ int, unsigned int �� signed int��
//λ�εĳ�Ա�����һ��ð�ź�һ�����֡�

//����
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};


//λ�� - ������λ
#include<stdio.h>
//struct S
//{
//	int a : 2;//2������λ
//	int b : 5;
//	int c : 10;
//	int d : 30;//����С��32
//};//47bit- 6���ֽ�*8 = 48��bit
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

//λ���ڴ����
//1.λ�εĳ�Ա������ int, unsigned int, signed int ������char ����
//2.λ�εĿռ����ǰ�����Ҫ��4���ֽڣ�int������1���ֽڣ�char���ķ�ʽ�����ٵ�
//3.λ���漰�ܶ಻ȷ��������λ���ǲ���ƽ̨�ģ�ע����ֲ�ĳ���Ӧ����ʹ��λ��

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

//ö��

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ö�ٳ���
//	Male = 3,//����������ֵ�����Ǹı䳣����ֵ
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
//	//enum color c = 0;//��������������ȷ��
//	//enum color c = red;
//	int color = RED;
//	//printf("%d %d %d\n", red, green, bule);
//	//printf("%d %d %d\n", Male, Female, Secret);
//	//return 0;
//}

//��#define���
//1.���Ӵ���Ŀɶ��Ժ�ά����
//2.��#define����ı�ʶ�����ö�ٳ����м�����ͣ������Ͻ�
//3.��ֹ������Ⱦ����װ��
//4.ʹ�÷��㣬һ�ο��Զ���������

//�����壨�����壩
//���ϵ���������Щ��Ա����һ��ռ䣨��������Ҳ�й����壩


//union Un
//{
//	char c;//1
//	int i;//4
//};
//����������Ĵ�С������Ա�Ĵ�С
//�������Ա���ܹ�ͬʱ����
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
	////����1�����С��
	////����2��������
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
	printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	 
 	//�͵�ַ ------------>�ߵ�ַ
	// ...[][][][11][22][33][44][][][][][][][][][][][]...��˴洢
	// ...[][][][44][33][22][11][][][][][][][][][][][]...С�˴洢
	//����һ�����ݣ������ڴ��д�ŵ��ֽ�˳��
	//��С�������ֽ�������
	//
	return 0;
}