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
//		fib1 = fib2;//采用这种方法一次只能输出一个
//		fib2 = fib;
//	}
//	return 0;
//}


//优化兔子产子问题

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
//		fib1 = fib1 + fib2;//采用这种方法进行输出一次可以输出两个；
//		fib2 = fib1 + fib2;
//	}
//	return 0;
//}

//最佳存款方案
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
//	printf("应存入的钱数为：%0.2f\n", money);
//	return 0;
//}

//牛顿迭代法求方程1的根
//
//#include<stdio.h>
//#include<math.h>
//
//float solution(float a, float b, float c, float d);
//
//int main()
//{
//	float x, a, b, c, d;
//	printf("请输入方程的系数：\n");
//	scanf("%f %f %f %f", &a, &b, &c, &d);
//	x = solution(a, b, c, d);
//	printf("所求方程的根为: x = %f\n", x);
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

//冒泡排序法
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
//	printf("请为数组初始化：\n");
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
//	printf("交换后的数组元素为: \n");
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


//选择排序

//#include<stdio.h>
//#define N 10
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int arr[N] = { 0 };
//	printf("请输入数据:\n");
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


//二分查找

//#include<stdio.h>
//#define N 10
//int main()
//{
//	int k, left = 0, right = N - 1, mid ,m = -1;
//	int arr[N] = {-3, 4, 7, 9, 13, 45, 67, 89,180 };
//	printf("请输入你要查找的数：\n");
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


//顺序查找
//#include<stdio.h>
//#define N 10
//
//int main()
//{
//	int m, k = -1;
//	int i = 0;
//	int arr[N] = { -3,4,7,9,13,45,67,89,100,180 };
//	printf("arr数组中的数据如下：\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	printf("请输入m:\n");
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
//		printf("找到了下标为 %d\n", k);
//	}
//	else
//	{
//		printf("Not be Found!\n");
//	}
//	return 0;
//}