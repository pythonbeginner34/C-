#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��Ǯ�ټ�����
//int main()
//{
//	int cock, hen, chicken;
//	for (cock = 0; cock <= 20; cock++)
//	{
//		for (hen = 0; hen <= 33; hen++)
//		{
//			for (chicken = 0; chicken <= 100; chicken++)
//			{
//				if ((5 * cock + 3 * hen + chicken / 3.0 == 100) && (cock + hen + chicken == 100))
//				{
//					printf("cock = %2d, hen = %2d, chicken = %2d\n", cock, hen, chicken);
//				}
//			}
//		}
//	}
//	return 0;
//}


//��Ǯ�ټ������Ż�   
//int main()
//{
//	int cock, hen, chicken;
//	for (cock = 0; cock <= 20; cock++)
//	{
//		for (hen = 0; hen <= 33; hen++)
//		{
//			chicken = 100 - cock - hen;
//			if (5 * cock + 3 * hen + chicken / 3.0 == 100)
//			{
//				printf("cock = %2d, hen = %2d, chicken = %2d\n", cock, hen, chicken);
//			}
//		}
//	}
//	return 0;
//}

//���鷽��֪������

//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, i = 0;
//	printf("A,B,C ������ѡ���Ϊ��\n");
//
//	for (a = 1; a <=5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				if (a != b && a != c && c != b)
//				{
//					printf("A:%2d  B:%2d  C:%2d   ", a, b, c);
//					i++;
//					if (i % 4 == 0)
//					{
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("����%d�ֽ��ķ���\n", i);
//	return 0;
//}
//


//���鷽��֪�����Ż�����
//int main()
//{
//	int a, b, c, i = 0;
//	printf("A,B,C,������ѡ���Ϊ��\n");
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5 && a != b; c++)
//			{
//				if (a != c && b != c)
//				{
//					printf("A = %2d B = %2d C = %2d    ", a, b, c);
//					i++;
//					if (i % 4 == 0)
//					{
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("�ܹ���%d�ֽ��ķ���\n", i);
//	return 0;
//}


//������㻹��ɹ��


//typedef struct data
//{
//	int year; 
//	int month;
//	int day;
//}DATE;
//
//int countDay(DATE);
//
//int runyear(int);
//
//void main()
//{
//	DATE today;
//	int totalDay;
//	int result;
//
//	printf("please input ָ������ �����꣬�£��� �� 1999 1 31\n");
//	scanf("%d %d %d", &today.year, &today.month, &today.day);
//	totalDay = countDay(today);
//	result = totalDay % 5;
//	if (result < 4)  //�����������ɹ��
//	{
//		printf("�������\n");
//	}
//	else
//	{
//		printf("����ɹ��\n");
//	}
//}
//
//int runyear(int year )//�ж��Ƿ�Ϊ����
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;//�����귵��1
//	}
//	else
//	{
//		return 0;//���Ƿ���0
//	}
//
//}
//
//int countDay(DATE currentDay)
//{
//	int perMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	int totalDay = 0, year, i;
//
//	for (year = 1990; year < currentDay.year; year++)//һֱ�ۼӵ�������ݵ�ǰһ��
//	{
//		if (runyear(year))//�ж��Ƿ�Ϊ����
//		{
//			totalDay += 366;//�������366
//		}
//		else
//		{
//			totalDay += 365;//ƽ���365
//		}
//	}
//	if (runyear(currentDay.year))
//	{
//		perMonth[2]++;//��������·�Ϊ29��
//	}
//	for (i = 1; i < currentDay.month; i++)//�ۼ�ÿ��
//	{
//		totalDay += perMonth[i];
//	}
//	totalDay += currentDay.day;//�ۼ�ÿ��
//	return totalDay;
//}


//int main()
//{
//	int i, j, k, tmp, flag = 0;//���ñ�־flag��Ϊ��������ʱ��ѭ���ı�־
//	for (i = 0; i < 10; i++)
//	{
//		if (flag)
//			break;
//		for (j = 0; j < 10; j++)
//			if (flag)
//				break;
//		{
//			if (i != j)//����Ҫ������λ��������ͬ
//			{
//				k = j + 10 * j + i * 100 + i * 1000;
//				for (tmp = 32; tmp <= 99; tmp++)//��32��ʼ����Ϊ��32��ʼ��ƽ��Ϊ��λ��
//				{
//					if (tmp * tmp == k)//�ж�k�Ƿ�Ϊĳ������ƽ��
//					{
//						printf("���³��ƺ�Ϊ��%d\n",k);
//						flag = 1; //�ҵ���������������flag��Ϊ1
//						break;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//���Ӳ�������
#include<stdio.h>

//int main()
//{
//	int fib1 = 1;
//	int fib2 = 1; 
//	int fib = 0;
//	int i = 0;
//	printf("%-12d%-12d", fib1, fib2);
//	for (i = 3; i <= 30; i++)
//	{
//		fib = fib1 + fib2;
//		printf("%-12d", fib);
//		if (i % 4 == 0)
//		{
//			printf("\n");
//		}
//		fib1 = fib2;//�������ַ���һ��ֻ�����һ��
//		fib2 = fib;
//	}
//	return 0;
//}


//�Ż����Ӳ�������

//int main()
//{
//	int fib1 = 1, fib2 = 1;
//	int i = 0;
//	for (i = 1; i <= 15; i++)
//	{
//		printf("%-12d%-12d", fib1, fib2);
//		if (i % 2 == 0)
//		{
//			printf("\n");
//		}
//		fib1 = fib1 + fib2;//�������ַ����������һ�ο������������
//		fib2 = fib1 + fib2;
//	}
//	return 0;
//}

//��Ѵ���
//#include<stdio.h>
//
//int main()
//{
//	double  money = 0.0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		money = (money + 1000.0) / (1 + 12 * 0.0063);
//	}
//	printf("Ӧ�����Ǯ��Ϊ��%0.2f\n", money);
//	return 0;
//}

//ţ�ٵ������󷽳�1�ĸ�
//
//#include<stdio.h>
//#include<math.h>
//
//float solution(float a, float b, float c, float d);
//
//int main()
//{
//	float x, a, b, c, d;
//	printf("�����뷽�̵�ϵ����\n");
//	scanf("%f %f %f %f", &a, &b, &c, &d);
//	x = solution(a, b, c, d);
//	printf("���󷽳̵ĸ�Ϊ: x = %f\n", x);
//	return 0;
//}
//
//float solution(float a, float b, float c, float d)
//{
//	float x0, x= 1.5, f, fd, h;
//	do
//	{
//		x0 = x;
//		f = a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d;
//		fd = 3 * a * x0 * x0 + 2 * b * x0 + c;
//		h = f / fd;
//		x = x0 - h;
//	} while (fabs(x - x0) >= 1e-5);
//	return x;;
//}

//ð������
//#include<stdio.h>
//#define N 10
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int count = 0;
//	int arr[N] = { 0 };
//	printf("��Ϊ�����ʼ����\n");
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - 1- i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("�����������Ԫ��Ϊ: \n");
//	for (i = 0; i < N; i++)
//	{
//		count++;
//		printf("%d  ", arr[i]);
//		if (count % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//	printf("\n");
//	return 0;
//}


//ѡ������

//#include<stdio.h>
//#define N 10
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int arr[N] = { 0 };
//	printf("����������:\n");
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("The original data: \n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%4d", arr[i]);
//		printf("\n");
//	}
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = i + 1; j < N; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	printf("The data after sorted: \n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%4d", arr[i]);
//		printf("\n");
//	}
//	return 0;
//}


//���ֲ���

//#include<stdio.h>
//#define N 10
//int main()
//{
//	int k, left = 0, right = N - 1, mid ,m = -1;
//	int arr[N] = {-3, 4, 7, 9, 13, 45, 67, 89,180 };
//	printf("��������Ҫ���ҵ�����\n");
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			m = mid;
//			break;
//		}
//	}
//	if (m >= 0)
//	{
//		printf("mid = %d\n", m );
//	}
//	else
//	{
//		printf("Not be found!\n");
//	}
//	return 0;
//}


//˳�����
//#include<stdio.h>
//#define N 10
//
//int main()
//{
//	int m, k = -1;
//	int i = 0;
//	int arr[N] = { -3,4,7,9,13,45,67,89,100,180 };
//	printf("arr�����е��������£�\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	printf("������m:\n");
//	scanf("%d", &m);
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] == m)
//		{
//			k = i;
//			break;
//		}
//	}
//	if (k >= 0)
//	{
//		printf("�ҵ����±�Ϊ %d\n", k);
//	}
//	else
//	{
//		printf("Not be Found!\n");
//	}
//	return 0;
//}