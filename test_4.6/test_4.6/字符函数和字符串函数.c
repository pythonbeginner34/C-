#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strlen - ���ַ�������
//int main()
//{
	/*int len = strlen("abcdef");*/
	//����ʾ��
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int len = strlen(arr);//���ֵ
//
//	printf("%d\n", len);
//	return 0;
//}



//ģ��ʵ�� strlen����
//size_t my_strlen(const char* str)
////int my_strlen(const char* str)
////�⺯���ж����strlen�еķ���������size_t ����unsigned int 
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
//	///*����ʾ��*/
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = strlen(arr);//���ֵ
//
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)//�޷�����-�޷����������޷����� 3 > 0
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//strcpy - �ַ�����������


//ģ��ʵ��strcpy����
//char* my_strcpy( char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬 ����'\0'
//	while (*dest++ == *src++)
//	{
//		;
//	}
//	//����Ŀ�ĵص���ʼ��ַ
//	return start;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//����ʾ��
//	//char arr2[] = { 'b', 'i', 't' };
//	//char* arr1 = "abcdefghi";//�����ַ������ܱ�����
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat - �ַ���׷�Ӻ���


//ģ��ʵ��strcat����

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



//���Ȳ������Ƶ��ַ�������

//�ȽϺ���-strcmp
//��һ�������ڵڶ���������<0����
//��һ�����ڵڶ���ʱ����0
//��һ��С�ڵڶ���ʱ����>0����

//#include<assert.h>
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

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;//׷�Ӻ��Զ���\0
//}//���Ҫ׷����Ŀ����Դ�ַ���׷��Դ�ַ����Զ���\0������׷��

//#include<string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	/*int ret = strcmp(p1,p2);*/
//	int ret = strncmp(p1,p2,4);
//	printf("%d\n", ret);
//	return 0;//����ֵ��strcmp��ͬ
//
//}

//strstr-�����ַ���
//
////NULL--��ָ��
//

//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//���ҷ��ص���p1�е�һ�γ��ֵ�Ҫ�����ַ�
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//ģ��ʵ��--strstr���Һ���

//#include<string.h>
//#include<assert.h>
////KMP �㷨
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
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);//���ҷ��ص���p1�е�һ�γ��ֵ�Ҫ�����ַ�
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok--�������и��ַ���
#include<string.h>

//int main()
//{
//	/*char arr[] = "zpw@bitdu.tech";
//	char* p = "@.";*/
//
//	//���ʮ����
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
////	char* ret = strtok(arr, p);//����Ҫ�и���ַ����и����
////	printf("%s\n", ret);
////	ret = strtok(NULL, p);//�ڶ����и�ʱ�����ָ�뼴��
////	printf("%s\n", ret);
////	ret = strtok(NULL, p);
////	printf("%s\n", ret);
//	return 0;
//}

//strerror --���󱨸溯��
#include<errno.h>
//int main()
//{
	//������ ������Ϣ
	//0 - No error
	//1 - Operation not permitted
	//2 - No such file or directory
	//...
	//errno ��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й�����,�����˴��󣬾ͻ����Ӧ�Ĵ����룬��ֵ��errno��
	/*char* str = strerror(errno);
	printf("%s\n", str);*/

	//���ļ�
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

//�ַ����ຯ��

#include<ctype.h>
//int main()
//{
//	char ch = '2';
//	/*int ret = islower(ch);*/
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//����������a~z��Сд��ĸ�������������
//���������ǲ���Сд��ĸ����0

//�ַ�ת������
//tolower ��дתСд
//toupper Сдת��д

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

//�����������ַ�����\0

//��������
//����������
//�ṹ������


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	strcpy(arr2, arr1);
//	return 0;
//}
//�ַ����������������κ͸�����
//����memcpy
//memmove
//memset


//memcpy--�ڴ濽��
//void* - ͨ������ָ�� ������ָ��
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
//	struct s arr3[] = { {"����", 20}, {"����",30} };
//	struct s arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//ģ��ʵ��memcpy����


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
//��������ص�����

//����memmove �����ڴ��ص�����

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

//c���Թ涨��memcopy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

//memmove - ģ��ʵ��


//dest����src��ߴ�ǰ��󿽱�
//dest����src����Ӻ���ǰ����
//��Զ�ȿ����ص�����
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
//	if (dest < src || dest >(char*)src + count)//��ǰ����
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else//�ɺ�ǰ
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


//memcmp - �ڴ�ȽϺ���

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	int arr2[] = { 1, 2, 5, 4 ,3 };//01 00 00 00 02 00 00 00 05 00 00 00 ...
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - �ڴ�����
//
//int main()
//{
//	/*char arr[10] = "0";*/
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//�ı����ʮ���ֽڶ�����ʮ����
//	return 0;
//}