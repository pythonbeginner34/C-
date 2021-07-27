#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~按位取反
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;//0001
//	int b = 2;//0010
//	int c = a |b;
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);//逗号表达式
//	printf("%d\n", d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//频繁使用的数据，放在寄存器里
//	register int num = 100;//建议放在寄存器里
//	return 0;
//}

//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int a = 10;
//int main()
//{
//	int a = 100;//局部变量优先
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d", strlen("c:\test/121"));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char n = 0;
//	//while ((ch = getchar()) != EOF)
//	while(scanf("%c", &n) != EOF)
//	{
//		printf("%c", n);
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>

char* replace_string(char* str, int len)
{
	int count = 0;
	int newlen = 0;
	char* ptr = str;
	char* p = str;
	char* q = NULL;
	char* r = NULL;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	newlen = len + 2*count;
	r = p + len - 1;
	q = p + newlen - 1;
	while (q != p)
	{
		if (*r== ' ')
		{
			*q-- = '0';
			*q-- = '2';
			*q-- = '%';
		}
		else
		{
			*q-- = *r;
		}
		r--;
	}
	return ptr;
}

int main()
{
	char p[20] = "we are happy.";
	int sz = strlen(p);
	printf("%s\n", replace_string(p, sz));
	return 0;
}