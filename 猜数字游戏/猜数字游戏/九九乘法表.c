#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("******************************");
//	printf("***** 1.play  0.exet   *******");
//	printf("******************************");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1; // ����1-100֮��������
//
//	while (1)
//	{
//		printf("����������");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��");
//		}
//		else if (guess == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//
//int main1()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	} while (input);
//	return 0;
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main1()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ��Խ���1���Ӻ�ػ���������룺������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	double flag = 1.0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag / i;2
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i < 200; i++)
//	{
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


#include<stdio.h>

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
			right = mid - 1;
		else if (a[mid] < k)
			left = mid + 1;
		else
		{
			return mid;
		}
	}	
	return -1;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{ 
		printf("�Ҳ���\n");
	}
	return 0;
}


