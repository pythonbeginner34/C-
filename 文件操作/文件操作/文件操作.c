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
//	fputc('b', pf);//
//	fputc('b', pf);//���ַ�bд���ļ�ָ��pf��ָ����ļ��ĵ�ǰдָ���λ��
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
//	printf("%c", fgetc(pfRead));//�õ��ļ�ָ��pf��ָ����ļ��е��ַ�b
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

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı�
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼�����
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
//	//��ʽ������ʽд�ļ�
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//��ʽ������ļ�����ָ����ʽ������������ļ��
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));//��pf��ָ�ļ����ݷŵ�ָ����ʽ�ı�����
//	printf("%d %f %s", s.n, s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));//����Ļ�ϻ�ȡ���뵽ָ���ı�����
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);//��ָ���ı�����ȡ�����������Ļ��
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
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//�Ѹ�ʽ��������ת�����ַ����浽������
//	printf("%s\n", buf);//���ַ�������ʽ���
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));//��buf���ȡ����ʽ�������ݷŵ�������
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//scanf/printf����Ա�׼��������ģ���ʽ�����������
//fscanf/fprintf���������������������ĸ�ʽ�����������
//sscanf/sprint sscanf�Ǵ��ַ����ж�����ת���ɸ�ʽ������
//sprintf�ǽ���ʽ��������ת�����ַ���

//�����Ƶ���������
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
//	struct S s = { "����", 20, 55.6 };
//
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
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
	//�����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%d\n", sizeof(struct S));
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}