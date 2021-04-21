#define _CRT_SECURE_NO_WARNINGS 1

//程序设计中的文件有两种：程序文件,数据文件
//程序文件：源文件(.c)，目标文件(.obj)，可执行文件(.exe)
//文件类型：文本文件，二进制文件；

//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//wb以二进制的形式写到文件里
//	fwrite(&a, 4, 1, pf);
//	pf = NULL;
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//int main()
//{
//	//打开文件test.txt
//	FILE* pf = fopen("test.txt", "r");//相对路径
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读取文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("D:\\C语言\\文件操作\\test.txt", "r");//绝对路径
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//键盘-标准输入设备 stdin
//屏幕-标准输出设备 stdout

//int main()
//{
//	int ch = fgetc(stdin);//从键盘上取
//	fputc(ch, stdout);//向屏幕上读
//	return 0;
//}

//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(arr, 1024, pf);
//	puts(arr);
//	/*printf("%s", arr);*/
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	//从键盘读取一行文本
	fgets()
}