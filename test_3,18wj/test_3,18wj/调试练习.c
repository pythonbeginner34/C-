#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; j <= n; i++)
//	{
//		ret = 1;//每次循环之前都初始化ret
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
// }
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;//arr[12]的地址和i的地址相同
//	}//栈区的默认使用：先使用高地址处的空间，在使用低地址处的空间//数组随着下标的增长地址由低到高变化      
//	system("pause"); // 使用的编译器不同内存布局不同 局部变量和数组之间的间隔空间不同
//	return 0;//relaese版本会优化程序 debug不会进行优化
//}

 /* my_strcpy(char* dest, char* src)
{
	 while (*src != '\0')
	 {
		 *dest = *src;
		 src++;
		 dest++;
	}
	 *dest = *src;
}*/


//#include<assert.h>
//char* my_strcpy(char* dest,  const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*(dest++) = *(src++))//如果写成*src++ = *dest++的话使用const可以很好避免
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	//字符串拷贝
//	//strcpy
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//    //在拷贝的时候将\0也拷贝进去了所以不会产生####
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//    //const int* p = &num;//err const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
//	//*p = 20;
//	int* const p = &num;//const 放在指针变量的*右边时，修饰的是p，p不能被改变了
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}