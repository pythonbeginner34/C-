#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strlen - 求字符串长度
//int main()
//{
	/*int len = strlen("abcdef");*/
	//错误示范
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int len = strlen(arr);//随机值
//
//	printf("%d\n", len);
//	return 0;
//}



//模拟实现 strlen函数
//size_t my_strlen(const char* str)
////int my_strlen(const char* str)
////库函数中定义的strlen中的返回类型是size_t 就是unsigned int 
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int main()
//{
//	//int len = my_strlen("abcdef");
//	///*错误示范*/
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = strlen(arr);//随机值
//
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)//无符号数-无符号数还是无符号数 3 > 0
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//strcpy - 字符串拷贝函数


//模拟实现strcpy函数
//char* my_strcpy( char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	//拷贝src指向的字符串到dest指向的空间， 包括'\0'
//	while (*dest++ == *src++)
//	{
//		;
//	}
//	//返回目的地的起始地址
//	return start;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//错误示范
//	//char arr2[] = { 'b', 'i', 't' };
//	//char* arr1 = "abcdefghi";//常量字符串不能被更改
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat - 字符串追加函数


//模拟实现strcat函数

//my_strcat(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* start = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//长度不受限制的字符串函数

//比较函数-strcmp
//第一个数大于第二个数返回<0的数
//第一个等于第二个时返回0
//第一个小于第二个时返回>0的数

//#include<assert.h>
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

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;//追加后自动补\0
//}//如果要追加数目大于源字符则追加源字符后自动补\0不会再追加

//#include<string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	/*int ret = strcmp(p1,p2);*/
//	int ret = strncmp(p1,p2,4);
//	printf("%d\n", ret);
//	return 0;//返回值和strcmp相同
//
//}

//strstr-查找字符串
//
////NULL--空指针
//

//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//查找返回的是p1中第一次出现的要查找字符
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//模拟实现--strstr查找函数

//#include<string.h>
//#include<assert.h>
////KMP 算法
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 =='\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);//查找返回的是p1中第一次出现的要查找字符
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok--按符号切割字符串
#include<string.h>

//int main()
//{
//	/*char arr[] = "zpw@bitdu.tech";
//	char* p = "@.";*/
//
//	//点分十进制
//	char arr[] = "196.168.31.121";
//	char* p = ".";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
////	char* ret = strtok(arr, p);//传入要切割的字符和切割符号
////	printf("%s\n", ret);
////	ret = strtok(NULL, p);//第二次切割时传入空指针即可
////	printf("%s\n", ret);
////	ret = strtok(NULL, p);
////	printf("%s\n", ret);
//	return 0;
//}

//strerror --错误报告函数
#include<errno.h>
//int main()
//{
	//错误码 错误信息
	//0 - No error
	//1 - Operation not permitted
	//2 - No such file or directory
	//...
	//errno 是一个全局的错误码的变量
	//当C语言的库函数在执行过程中,发生了错误，就会把相应的错误码，赋值到errno中
	/*char* str = strerror(errno);
	printf("%s\n", str);*/

	//打开文件
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success");
	}
	return 0;
}*/

//字符分类函数

#include<ctype.h>
//int main()
//{
//	char ch = '2';
//	/*int ret = islower(ch);*/
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//如果输入的是a~z的小写字母则输出非零数字
//如果输出的是不是小写字母返回0

//字符转换函数
//tolower 大写转小写
//toupper 小写转大写

//int main()
//{
//	/*char ch = tolower('Q');
//	char th = toupper('q');
//	putchar(ch);
//	putchar(th);*/
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy
//strcat
//strcmp
//strcmp
//strncpy
//strncat
//strncmp

//操作对象是字符串，\0

//整形数组
//浮点型数组
//结构体数组


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	strcpy(arr2, arr1);
//	return 0;
//}
//字符函数不能用于整形和浮点型
//引入memcpy
//memmove
//memset


//memcpy--内存拷贝
//void* - 通用类型指针 无类型指针
//void* memcpy(void* destination, const void* source, size_t num);
//
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct s arr3[] = { {"张三", 20}, {"李四",30} };
//	struct s arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//模拟实现memcpy函数


#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	my_memcpy(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//解决不了重叠问题

//采用memmove 处理内存重叠问题

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//c语言规定：memcopy 只要处理不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

//memmove - 模拟实现


//dest落在src左边从前向后拷贝
//dest落在src后面从后向前拷贝
//永远先拷贝重叠部分
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return start;
//}


//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src || dest >(char*)src + count)//由前到后
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else//由后到前
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//    my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//memcmp - 内存比较函数

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	int arr2[] = { 1, 2, 5, 4 ,3 };//01 00 00 00 02 00 00 00 05 00 00 00 ...
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - 内存设置
//
//int main()
//{
//	/*char arr[10] = "0";*/
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//改变的是十个字节而不是十个数
//	return 0;
//}