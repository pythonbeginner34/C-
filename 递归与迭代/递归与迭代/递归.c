#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	int num = 1;
//	print(num);
//	return 0;
//}


//#include<stdio.h>
//
//int mn_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", mn_strlen(arr));
//	return 0;
//}

//#include<stdio.h>
//
//int  MN_strlen(char* p)
//{
//    if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + MN_strlen(p + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", MN_strlen(arr));
//	return 0;
//}

//#include<stdio.h>
//
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);//�ݹ����̫������ջ�����stack overflow��
//	}
//}
//
//int main()
//{
//	int input;
//	printf("������һ����:\n");
//	scanf("%d", &input);
//	printf("%d �Ľ׳�Ϊ %d\n", input, Fac(input));
//	return 0;
//}


//#include<stdio.h>
//
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int input;
//	printf("������һ����:\n");
//	scanf("%d", &input);
//	printf("��n��쳲�������Ϊ%d\n", fib(input));
//	return 0;
//}

////ʹ�õ����ķ�����n�Ľ׳�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <=  n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int input;
//	printf("������һ����:\n");
//	scanf("%d", &input);
//	printf("%d �Ľ׳�Ϊ %d\n", input, fac(input));
//	return 0;
//}


//쳲��������ĵ����㷨
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int input;
//	printf("������һ����:\n");
//	scanf("%d", &input);
//	printf("��n��쳲�������Ϊ%d\n", fib(input));
//	return 0;
//}

//�ݹ�ʵ�ִ����Ч�ʵ͵��ǿɶ��Ժ�
//�����㷨��Ȼʵ�ֿ��ܸ����ӵ���Ч�ʸ�
//��һ��������Ը���ʱ�������õ���ʵ�֣���ʱ�ݹ�ļ���Կ������ֲ�������ʱ�����Ŀ���


