#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	/*for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d", i);
//	}*/
//	return 0;
//}

//�����Լ��
 /*
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int max = (m > n) ? m : n;
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("���Լ��Ϊ%d\n", max);
			break;
		}
		max--;
	}
	return 0;
}*/

//շת����������Լ��
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("������������:");
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//		printf("���Լ��Ϊ%d", n);
//	}
//	return 0;
//}
//
//
//��ӡ1000-2000֮�������
//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d\n", y);
//			count++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d\n", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//

//��100-200֮�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
	//printf("\ncount = %d\n", count);
	//return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//����С������
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("������������:\n");
//	scanf("%d %d", &m, &n);
//	int max = (m > n) ? m : n;
//	while (1)
//	{
//		if (max % m == 0 && max % n == 0)
//		{
//			printf("��С������Ϊ%d\n", max);
//			break;
//		}
//		max++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int gcd = 0;
//	printf("������������:\n");
//	scanf("%d %d", &m, &n);
//	int mul = m * n;
//	while (gcd = m % n)
//	{
//		m = n;
//		n = gcd;
//	}
//	gcd = n;
//	printf("��С������Ϊ:%d\n", mul / gcd);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ����\n");
//	scanf("%d", &n);
//	int ret = is_prime(n);
//	if (ret == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int is_leap(int n)
//{
//	if (n % 4 == 0)
//	{
//		if (n % 100 != 0)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	if (n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap(i) == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//#include"sub.h"
//#pragma comment(lib, "sub.lib")//��̬�⵼��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:\n");
//	scanf("%d %d", &a, &b);
//	int c = sub(a, b);
//	printf("%d", c);
//	return 0;
//}