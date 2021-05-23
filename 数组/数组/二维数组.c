#include<stdio.h>
//int main()
//{
	//创建
	//int arr[3][4];
	//int arr[3][10];
	//初始化
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,4,5,6,7,8 };//不完全初始化补零
	//int arr[3][4] = { {1,2,3,0}, {4,5,6,0},{7,8,9,0} };
	//int arr[][4] = {{1,2},{3,4},{5,6}};//行号可以省略，列号不可以省略
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
	//		printf("&arr[%d][%d] = %p\n",i, j ,&arr[i][j]);//二维数组在内存中是连续存在的
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
//	//排序为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}

//arr只有两种情况当数组名使用
//1.sizeof(arr)    arr当数组名使用
//&arr  arr当数组名使用 
//其余全为数组首元素地址

//printf("%p\n", arr);
//printf("%p\n", arr + 1);//相差40
//printf("%p\n", &arr);
//printf("%p\n", &arr+1);//相差4

//int main()
//{
//	char a = (int)'1';
//	printf("%d\n", a);
//	return 0;
//}




//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		pirntf("%d\n", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//

//交换数组元素
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };

	int arr[5] = { 0 };

	int sz = sizeof(arr1) / sizeof(arr[0]);
	int i = 0; 

	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}