#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//百钱百鸡问题
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


//百钱百鸡问题优化   
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

//借书方案知道多少

//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, i = 0;
//	printf("A,B,C 三人所选书号为：\n");
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
//	printf("共有%d种借阅方法\n", i);
//	return 0;
//}
//


//借书方案知多少优化方案
//int main()
//{
//	int a, b, c, i = 0;
//	printf("A,B,C,三人所选书号为：\n");
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
//	printf("总共有%d种借阅方法\n", i);
//	return 0;
//}


//今天打鱼还是晒网


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
//	printf("please input 指定日期 包括年，月，日 如 1999 1 31\n");
//	scanf("%d %d %d", &today.year, &today.month, &today.day);
//	totalDay = countDay(today);
//	result = totalDay % 5;
//	if (result < 4)  //三天打鱼两天晒网
//	{
//		printf("今天打鱼\n");
//	}
//	else
//	{
//		printf("今天晒网\n");
//	}
//}
//
//int runyear(int year )//判断是否为闰年
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;//是闰年返回1
//	}
//	else
//	{
//		return 0;//不是返回0
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
//	for (year = 1990; year < currentDay.year; year++)//一直累加到输入年份的前一年
//	{
//		if (runyear(year))//判断是否为闰年
//		{
//			totalDay += 366;//是闰年加366
//		}
//		else
//		{
//			totalDay += 365;//平年加365
//		}
//	}
//	if (runyear(currentDay.year))
//	{
//		perMonth[2]++;//是闰年二月份为29天
//	}
//	for (i = 1; i < currentDay.month; i++)//累加每月
//	{
//		totalDay += perMonth[i];
//	}
//	totalDay += currentDay.day;//累加每天
//	return totalDay;
//}


//int main()
//{
//	int i, j, k, tmp, flag = 0;//设置标志flag作为满足条件时跳循环的标志
//	for (i = 0; i < 10; i++)
//	{
//		if (flag)
//			break;
//		for (j = 0; j < 10; j++)
//			if (flag)
//				break;
//		{
//			if (i != j)//条件要求车牌四位数不能相同
//			{
//				k = j + 10 * j + i * 100 + i * 1000;
//				for (tmp = 32; tmp <= 99; tmp++)//从32开始，因为从32开始的平方为四位数
//				{
//					if (tmp * tmp == k)//判断k是否为某个数的平方
//					{
//						printf("肇事车牌号为：%d\n",k);
//						flag = 1; //找到满足条件的数将flag置为1
//						break;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//兔子产子问题

