#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//移位操作符

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	int a = -1;//b进行运算不会影响a值
//	//左移操作符和有异操作符不会对负数进行
//	//整数的二进制表示形式有三种
//	//原码：直接根据数值写出二进制序列就是原码
//	//反码：源码的符号位不变，其余位按位取反就是反码
//	//补码：反码+1，就是补码
//	int b = a >> 1;
//	printf("b = %d\n", b);//-1
//	printf("a = %d\n", a);
//	return 0;
//}

//位操作符(操作数必须为整数)

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//& - 按位（二进制位)与
//	// | 按位或（二进制)位
//	// ^按位异或
//	//int c = a & b;
//	//int c = a | b;
//	int c = a ^ b;
//	//00000011
//	//00000101
//	//按位与全为1才为1，否则为零
//	//00000001
//	//按位或1个则为1，全为零则为零
//	//00000111
//	//相同为0不同为1
//	//00000110
//	printf("%d\n", c);
//	return 0;
//}

//交换两个变量的值，不使用其他变量

#include<stdio.h>

int main()
{
	int input1 = 0;
	int input2 = 0;
	//交换
	int c = 0;
	printf("请输入要交换的两个数：\n");
	scanf("%d%d", &input1, &input2);
	printf("input1 = %d, input2 = %d\n", input1, input2);
	
	input1 = input1 ^ input2;
	input2 = input1 ^ input2;
	input1 = input1 ^ input2;
	printf("input1 = %d, input2 = %d\n", input1, input2);
	return 0;
}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换
//	int c = 0;
//	printf("a = %d, b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//当数值太大时会导致溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//a^a = 0 a和a异或为零
//	//a^0 = a a和0身异或还是它本身
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int i = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &a);
//	for(i = 0; i < 32; i++)
//	{
//		if (((a >> i )& 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//单目操作符

//int main()
//{
//	int flag = 5;
//	if (flag)//flag为真输出hehe
//	{
//		printf("hehe\n");
//	}
//	if (!flag)
//	{
//		printf("haha\n");//flag为假输出haha
//	}
//	return 0;
//}
//


//int main()
//{
//	short s = 5;
//	int a = 10;
	//char arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//单位是字节
	//printf("%d\n", sizeof(int[10]));
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(s = a + 2));//2 sizeof中的表达式不参与运算   ***
	//printf("%d\n", sizeof(s));//2
	//printf("%d\n", s);//5
	//printf("%d\n", sizeof int)//error
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//~那位取反
//
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);//29
//	printf("%d\n", a);
//	//将a变回来
//	a = a & ~(1 << 4);
//	printf("%d\n", a);//13
//	return 0;
//}

//++ --

//int main()
//{
//	int a = 10;
//	int b = a++;//先被使用在自增  先将a赋值给b，再将a自增；  ***
//	/*int b = ++a;*/ //先自增在使用  先将a自增，再将a的值赋给b
//
//	printf("%d\n", a);//11 
//	printf("%d\n", b);//10
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	&a;//& - 取地址操作符
//	printf("%p\n", &a);
//	int* pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;// 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);
//	return 0;
//}

//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

// 比较两个字符串相等，不能使用 ==、

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a = 0不需要计算 1 2 3 4
//	//i = a++ || ++b ||d++;//b不为零，后面不需要计算了
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//条件操作符 - 三目操作符

//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = -1;
//	}
//
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//}

//求a b 最大值 max = (a > b) ? a : b;

//逗号表达式
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式要从左到右依次计算，但是表达式的值是最后一个表达式结果
//
//	int d = (c = 1, a = c + 3, b = a - 4, c = b + 4);
//	printf("%d\n", d);
//	return 0;
//}

//#include<stdio.h>
//
//int  main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	int result = 0;
//	int num = 0;
//	int i = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &input1, &input2);
//	result = input1 ^ input2;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((result >> i) & 1))
//		{
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int input = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &input);
//	printf("奇数位上的数为：\n");
//	for (i = 0; i < 32; i += 2)
//	{
//		if (((input >> i) & 1) == 1)
//		{
//			printf("%d", 1);
//		}
//		else
//		{
//			printf("%d", 0);
//		}
//	}
//	printf("\n");
//	printf("偶数位上的数为：\n");
//
//	for (j = 0; j < 32; j += 2)
//	{
//		if (((input >> j) & 2) == 2)
//		{
//			printf("%d", 1);
//		}
//		else
//		{
//			printf("%d", 0);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
