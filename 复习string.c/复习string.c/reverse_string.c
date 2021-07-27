#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = *(str + left);
//		left++;
//		right--;
//	}
//}
//#include<stdio.h>
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	(*str) = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
