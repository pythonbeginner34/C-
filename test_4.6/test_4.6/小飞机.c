#define _CRT_SECURE_NO_WARNINGS 1h
//#include<stdio.h>
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *     \n");
//	printf("    *  *     \n");
//
//	return 0;
//}

//void Div(int a)
//{
//	if (a >= 1 && a <= 100000)
//	{
//		if (a % 5 == 0)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	Div(input);
//	return 0;
//}
#include<stdio.h>
//
//void Max(int c, int d)
//{
//	int max = c;
//	if (d > c)
//	{
//		max = d;
//	}
//	else
//	{
//		max = c;
//	}
//	printf("Max = %d\n", max);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = a;
//	scanf("%d%d", &a, &b);
//	Max(a, b);
//	return 0;
//}
//长度不受限制的字符串函数

//比较函数-strcmp
//第一个数大于第二个数返回<0的数
//第一个等于第二个时返回0
//第一个小于第二个时返回>0的数
#include<string.h>
#include<assert.h>
////模拟实现strcmp函数
//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);//任何编译器下都可以实现
//}
////只适用于VS编译器
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}*/
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//
//	printf("%d\n", ret);
//	return 0;
//}

//长度不受限制的函数只受\0的限制会产生安全问题
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strncpy 拷贝num个字符从源字符到目标空间
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);//指定的字符串数目大于源头数目多余的用\0补齐直到补齐num个
//	return 0;
//}
//模拟实现strncpy

//char* my_strncpy(char* destination, const char* source,int count)
//{
//	char* start = destination;
//
//	while (count && (*destination++ = *source++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*destination++ = '\0';
//		}
//	}
//	return (start);
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;//追加后自动补\0
}//如果要追加数目大于源字符则追加源字符后自动补\0不会再追加