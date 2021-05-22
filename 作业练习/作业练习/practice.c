#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//
//	}
//	//在str1中给自己追加一个字符str1
//	//strcat自己给自己追加时会崩溃
//	strncat(str1, str1, len1);//abcdefabcdef
//	//判断str2指向的是str1指向字符串的子串
//	//strstr找子串的
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}
 
//int FindNum(int arr[3][3], int k, int* px, int * py)
//{
//	int x = 0;
//	int y = *py - 1;
//	 
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double flag = 1.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10] = { 0 };
//	int input;
//	for (j = 0; j < 10; j++)
//	{
//		scanf("%d", &input);
//		arr[j] = input;
//
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if ( max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("******************************");
//	printf("***** 1.play  0.exet   *******");
//	printf("******************************");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//
//	while (1)
//	{
//		printf("请输入数字");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了");
//		}
//		else if (guess == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//
//int is_leap(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0))
//	{
//		return -1;
//	}
//	else if (x % 400 == 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int input = 0;
//	int result = 0;
//	printf("请输入一个年份\n");
//	scanf("%d", &input);
//	result = is_leap(input);
//	if (result == -1)
//	{
//		printf("输入的数是素数\n");
//	}
//	else
//	{
//		printf("输入的数不是素数\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void exchange(int* a, int* b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &x, &y);
//	exchange(&x, &y);
//	printf("交换后的两个数为: %d %d\n", x, y);
//	return 0;
//}

//#include<stdio.h>
//
//void Mult(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input;
//	printf("请输入你想要的乘法口诀的阶数:");
//	scanf("%d", &input);
//	Mult(input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int* start = arr;
//	for (i = 0; i < length; i++)
//	{
//		printf("%d ", *start++);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("请输入a的值: \n");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a >= 0 && a <= 9)
//		{
//			break;
//		}
//	}
//	b = a;
//	for (i = 2; i <= 5; i++)
//	{
//		a = a * 10 + i * b;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int c = 0;
//	int b = 0;
//	int index = 1;
//	for (i = 1; i <= 100000; i++)
//	{
//		c = i;
//		b = 0;
//		index = 1;
//		while (c / 10 != 0)
//		{
//			index++;
//			c = c / 10;
//		}
//		c = i;
//		for (j = 1; j <= index; j++)
//		{
//			a = c % 10;
//			c = c / 10;
//			b += (int)pow(a,index);
//		}
//		if (i == b)
//		{
//			printf("水仙花数为: %d\n", i);
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>
//
//void reverse(char* str, int length)
//{
//	int left = 0;
//	int right = length - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}
//

//#include<stdio.h>
//#define row 8
//#define col 8
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    char num = 0;
//    scanf("%c", &num);
//    for (i = 1; i <= row; i++)
//    {
//        for (j = 1; j <= col - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++)
//        {
//            printf("%c", num);
//        }
//        printf("\n");
//    }
//    for (i = row - 1; i > 0; i--)
//    {
//        for (j = 1; j <= col - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++)
//        {
//            printf("%c", num);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int q = 20;
//	int p = 20;
//	while (q != 1)
//	{
//		if (q % 2 == 0)
//		{
//			q = q / 2;
//			p += q;
//		}
//		else
//		{
//			q = (q - 1) / 2 + 1;
//			p += q - 1;
//		}
//	}
//	printf("%d", p);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//int count = 0;
//assert(str != NULL);
//while (*str)
//{
//	count++;
//	str++;
//}
//return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

#include<stdio.h>
#include<assert.h>

char* my_strcpy( char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* start = dest;
	//拷贝src指向的字符串到dest指向的空间， 包括'\0'
	while (*dest++ == *src++)
	{
		;
	}
	//返回目的地的起始地址
	return start;
}

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
