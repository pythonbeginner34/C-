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

