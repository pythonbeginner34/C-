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
//���Ȳ������Ƶ��ַ�������

//�ȽϺ���-strcmp
//��һ�������ڵڶ���������<0����
//��һ�����ڵڶ���ʱ����0
//��һ��С�ڵڶ���ʱ����>0����
#include<string.h>
#include<assert.h>
////ģ��ʵ��strcmp����
//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
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
//	return (*str1 - *str2);//�κα������¶�����ʵ��
//}
////ֻ������VS������
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

//���Ȳ������Ƶĺ���ֻ��\0�����ƻ������ȫ����
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strncpy ����num���ַ���Դ�ַ���Ŀ��ռ�
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);//ָ�����ַ�����Ŀ����Դͷ��Ŀ�������\0����ֱ������num��
//	return 0;
//}
//ģ��ʵ��strncpy

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
	return 0;//׷�Ӻ��Զ���\0
}//���Ҫ׷����Ŀ����Դ�ַ���׷��Դ�ַ����Զ���\0������׷��