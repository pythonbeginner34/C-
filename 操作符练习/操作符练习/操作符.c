#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��λ������

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	int a = -1;//b�������㲻��Ӱ��aֵ
//	//���Ʋ��������������������Ը�������
//	//�����Ķ����Ʊ�ʾ��ʽ������
//	//ԭ�룺ֱ�Ӹ�����ֵд�����������о���ԭ��
//	//���룺Դ��ķ���λ���䣬����λ��λȡ�����Ƿ���
//	//���룺����+1�����ǲ���
//	int b = a >> 1;
//	printf("b = %d\n", b);//-1
//	printf("a = %d\n", a);
//	return 0;
//}

//λ������(����������Ϊ����)

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//& - ��λ��������λ)��
//	// | ��λ�򣨶�����)λ
//	// ^��λ���
//	//int c = a & b;
//	//int c = a | b;
//	int c = a ^ b;
//	//00000011
//	//00000101
//	//��λ��ȫΪ1��Ϊ1������Ϊ��
//	//00000001
//	//��λ��1����Ϊ1��ȫΪ����Ϊ��
//	//00000111
//	//��ͬΪ0��ͬΪ1
//	//00000110
//	printf("%d\n", c);
//	return 0;
//}

//��������������ֵ����ʹ����������

#include<stdio.h>

int main()
{
	int input1 = 0;
	int input2 = 0;
	//����
	int c = 0;
	printf("������Ҫ��������������\n");
	scanf("%d%d", &input1, &input2);
	printf("input1 = %d, input2 = %d\n", input1, input2);
	
	input1 = input1 ^ input2;
	input2 = input1 ^ input2;
	input1 = input1 ^ input2;
	printf("input1 = %d, input2 = %d\n", input1, input2);
	return 0;
}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//����
//	int c = 0;
//	printf("a = %d, b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//����ֵ̫��ʱ�ᵼ�����
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//a^a = 0 a��a���Ϊ��
//	//a^0 = a a��0�������������
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int i = 0;
//	printf("������һ����\n");
//	scanf("%d", &a);
//	for(i = 0; i < 32; i++)
//	{
//		if (((a >> i )& 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//��Ŀ������

//int main()
//{
//	int flag = 5;
//	if (flag)//flagΪ�����hehe
//	{
//		printf("hehe\n");
//	}
//	if (!flag)
//	{
//		printf("haha\n");//flagΪ�����haha
//	}
//	return 0;
//}
//


//int main()
//{
//	short s = 5;
//	int a = 10;
	//char arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//��λ���ֽ�
	//printf("%d\n", sizeof(int[10]));
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(s = a + 2));//2 sizeof�еı��ʽ����������   ***
	//printf("%d\n", sizeof(s));//2
	//printf("%d\n", s);//5
	//printf("%d\n", sizeof int)//error
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//~��λȡ��
//
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);//29
//	printf("%d\n", a);
//	//��a�����
//	a = a & ~(1 << 4);
//	printf("%d\n", a);//13
//	return 0;
//}

//++ --

//int main()
//{
//	int a = 10;
//	int b = a++;//�ȱ�ʹ��������  �Ƚ�a��ֵ��b���ٽ�a������  ***
//	/*int b = ++a;*/ //��������ʹ��  �Ƚ�a�������ٽ�a��ֵ����b
//
//	printf("%d\n", a);//11 
//	printf("%d\n", b);//10
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	&a;//& - ȡ��ַ������
//	printf("%p\n", &a);
//	int* pa = &a;//pa��������ŵ�ַ�� - pa����һ��ָ�����
//	*pa = 20;// �����ò����� - ��ӷ��ʲ�����
//	printf("%d\n", a);
//	return 0;
//}

//ǿ������ת��
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

// �Ƚ������ַ�����ȣ�����ʹ�� ==��

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a = 0����Ҫ���� 1 2 3 4
//	//i = a++ || ++b ||d++;//b��Ϊ�㣬���治��Ҫ������
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//���������� - ��Ŀ������

//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = -1;
//	}
//
//	//��Ŀ������
//	b = (a > 5 ? 1 : -1);
//}

//��a b ���ֵ max = (a > b) ? a : b;

//���ű��ʽ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//���ű��ʽҪ���������μ��㣬���Ǳ��ʽ��ֵ�����һ�����ʽ���
//
//	int d = (c = 1, a = c + 3, b = a - 4, c = b + 4);
//	printf("%d\n", d);
//	return 0;
//}

//#include<stdio.h>
//
//int  main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	int result = 0;
//	int num = 0;
//	int i = 0;
//	printf("������������\n");
//	scanf("%d%d", &input1, &input2);
//	result = input1 ^ input2;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((result >> i) & 1))
//		{
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int input = 0;
//	printf("������һ����\n");
//	scanf("%d", &input);
//	printf("����λ�ϵ���Ϊ��\n");
//	for (i = 0; i < 32; i += 2)
//	{
//		if (((input >> i) & 1) == 1)
//		{
//			printf("%d", 1);
//		}
//		else
//		{
//			printf("%d", 0);
//		}
//	}
//	printf("\n");
//	printf("ż��λ�ϵ���Ϊ��\n");
//
//	for (j = 0; j < 32; j += 2)
//	{
//		if (((input >> j) & 2) == 2)
//		{
//			printf("%d", 1);
//		}
//		else
//		{
//			printf("%d", 0);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
