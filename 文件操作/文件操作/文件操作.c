#define _CRT_SECURE_NO_WARNINGS 1

//��������е��ļ������֣������ļ�,�����ļ�
//�����ļ���Դ�ļ�(.c)��Ŀ���ļ�(.obj)����ִ���ļ�(.exe)
//�ļ����ͣ��ı��ļ����������ļ���

//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//wb�Զ����Ƶ���ʽд���ļ���
//	fwrite(&a, 4, 1, pf);
//	pf = NULL;
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//int main()
//{
//	//���ļ�test.txt
//	FILE* pf = fopen("test.txt", "r");//���·��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//��ȡ�ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("D:\\C����\\�ļ�����\\test.txt", "r");//����·��
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
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//�ر��ļ�
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
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//����-��׼�����豸 stdin
//��Ļ-��׼����豸 stdout

//int main()
//{
//	int ch = fgetc(stdin);//�Ӽ�����ȡ
//	fputc(ch, stdout);//����Ļ�϶�
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
//	//���ļ�
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
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	//�Ӽ��̶�ȡһ���ı�
	fgets()
}