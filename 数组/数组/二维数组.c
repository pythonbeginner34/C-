#include<stdio.h>
//int main()
//{
	//����
	//int arr[3][4];
	//int arr[3][10];
	//��ʼ��
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,4,5,6,7,8 };//����ȫ��ʼ������
	//int arr[3][4] = { {1,2,3,0}, {4,5,6,0},{7,8,9,0} };
	//int arr[][4] = {{1,2},{3,4},{5,6}};//�кſ���ʡ�ԣ��кŲ�����ʡ��
	//int i = 0;
	//int j = 0;
	//int* p = arr;
	//for (i = 0;i < 12; i++)
	//{
	//	printf("%d\n", *p);
	//	p++;
	//}
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		/*printf("%d\n", arr[i][j]);*/
	//		printf("&arr[%d][%d] = %p\n",i, j ,&arr[i][j]);//��ά�������ڴ������������ڵ�
	//	}
	//}
	//return 0;
//}


//bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//  flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
// 
//		if(flag == 1)
//		{
//			break;
//      }
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//����Ϊ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}

//arrֻ�����������������ʹ��
//1.sizeof(arr)    arr��������ʹ��
//&arr  arr��������ʹ�� 
//����ȫΪ������Ԫ�ص�ַ

//printf("%p\n", arr);
//printf("%p\n", arr + 1);//���40
//printf("%p\n", &arr);
//printf("%p\n", &arr+1);//���4