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
//	fputc('b', pf);//
//	fputc('b', pf);//将字符b写到文件指针pf所指向的文件的当前写指针的位置
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
//	printf("%c", fgetc(pfRead));//得到文件指针pf所指向的文件中的字符b
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

//int main()
//{
//	//从键盘读取一行文本
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到表准输出流
//	gets(buf);
//	puts(buf);
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};

//int main()
//{
//	/*struct S s = { 100, 3.14f,"bit" };*/
//	struct S s = { 0 };
//	/*FILE* pf = fopen("test,txt", "w");*/
//	FILE* pf = fopen("test,txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//格式化输出文件，将指定格式的内容输出到文件里；
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));//将pf所指文件内容放到指定格式的变量中
//	printf("%d %f %s", s.n, s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));//从屏幕上获取输入到指定的变量中
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);//从指定的变量获取内容输出到屏幕上
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//把格式化的内容转化成字符串存到数组里
//	printf("%s\n", buf);//以字符串的形式输出
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));//从buf里读取按格式化的内容放到变量里
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//scanf/printf是针对标准输入输出的，格式化输入输出。
//fscanf/fprintf是针对所有输入输出流，的格式化输入输出。
//sscanf/sprint sscanf是从字符串中读数据转换成格式化数据
//sprintf是将格式化的数据转换成字符串

//二进制的输入和输出
//fread fwrite
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三", 20, 55.6 };
//
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



struct S
{
	char name;
	int age;
	double score;
};

int main()
{
	struct S tmp = { 0 };

	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//二进制的形式读文件
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%d\n", sizeof(struct S));
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}