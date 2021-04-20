#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//#include<stdio.h>
//
//int mn_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", mn_strlen(arr));
//	return 0;
//}

//#include<stdio.h>
//
//int  MN_strlen(char* p)
//{
//    if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + MN_strlen(p + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", MN_strlen(arr));
//	return 0;
//}

//#include<stdio.h>
//
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);//递归次数太多会造成栈溢出（stack overflow）
//	}
//}
//
//int main()
//{
//	int input;
//	printf("请输入一个数:\n");
//	scanf("%d", &input);
//	printf("%d 的阶乘为 %d\n", input, Fac(input));
//	return 0;
//}


//#include<stdio.h>
//
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int input;
//	printf("请输入一个数:\n");
//	scanf("%d", &input);
//	printf("第n个斐波那契数为%d\n", fib(input));
//	return 0;
//}

//使用迭代的方法求n的阶乘
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <=  n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int input;
//	printf("请输入一个数:\n");
//	scanf("%d", &input);
//	printf("%d 的阶乘为 %d\n", input, fac(input));
//	return 0;
//}


//斐波那契数的迭代算法
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int input;
//	printf("请输入一个数:\n");
//	scanf("%d", &input);
//	printf("第n个斐波那契数为%d\n", fib(input));
//	return 0;
//}

//递归实现代码的效率低但是可读性好
//迭代算法虽然实现可能更复杂但是效率高
//当一个代码相对复杂时，难以用迭代实现，此时递归的简洁性看可以弥补它运行时带来的开销


//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str+ 1);
//	}
//}
////迭代方法实现倒序排列
////void reverse_string(char* str)
////{
////	int left = 0;
////	int right = my_strlen(str)-1;
////
////	while (left < right)
////	{
////		char tmp = str[left];
////		str[left] = str[right];
////		str[right] = tmp;
////		left++;
////		right--;
////	}
////}
//
////递归方法实现倒叙排列
// 
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = str[len - 1];
//	str[len - 1] = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}
//
//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + (n%10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//
//	printf("%d\n", sum);
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%d的%d次方为%lf\n",n ,k ,ret);
//	return 0;
//
//}
//	
