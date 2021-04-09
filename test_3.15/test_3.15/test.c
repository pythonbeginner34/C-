#include<stdio.h>
//
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);//15
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后++
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
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

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //逻辑与进行判断时若左边第一个为假时，不用再进行后续判断
//	i = a++ || ++b || d++;//逻辑或进行运算时，若在左边第一个为真时，不用在进行后续判断
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);
	return 0;

	//if (a > b)
	//	b = 3;
	//else
	//	a = -3;
	//return 0;
	//b = (a > 5 ? 3 : -3);
 }