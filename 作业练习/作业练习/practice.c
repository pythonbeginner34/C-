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
//	//��str1�и��Լ�׷��һ���ַ�str1
//	//strcat�Լ����Լ�׷��ʱ�����
//	strncat(str1, str1, len1);//abcdefabcdef
//	//�ж�str2ָ�����str1ָ���ַ������Ӵ�
//	//strstr���Ӵ���
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
 
int FindNum(int arr[3][3], int k, int* px, int * py)
{
	int x = 0;
	int y = *py - 1;
	 
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k,&x,&y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}