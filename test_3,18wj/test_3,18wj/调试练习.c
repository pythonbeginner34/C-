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
//		ret = 1;//ÿ��ѭ��֮ǰ����ʼ��ret
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
//		arr[i] = 0;//arr[12]�ĵ�ַ��i�ĵ�ַ��ͬ
//	}//ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�//���������±��������ַ�ɵ͵��߱仯      
//	system("pause"); // ʹ�õı�������ͬ�ڴ沼�ֲ�ͬ �ֲ�����������֮��ļ���ռ䲻ͬ
//	return 0;//relaese�汾���Ż����� debug��������Ż�
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
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*(dest++) = *(src++))//���д��*src++ = *dest++�Ļ�ʹ��const���Ժܺñ���
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	//�ַ�������
//	//strcpy
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//    //�ڿ�����ʱ��\0Ҳ������ȥ�����Բ������####
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//    //const int* p = &num;//err const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	//*p = 20;
//	int* const p = &num;//const ����ָ�������*�ұ�ʱ�����ε���p��p���ܱ��ı���
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}