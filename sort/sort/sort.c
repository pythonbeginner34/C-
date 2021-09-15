#include"sort.h"

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//void SelectSort(int* arr, int n)
//{
//	int begin = 0;
//	int end = n - 1;
//	int i = 0;
//	while (begin < end)
//	{
//		int min = end;
//		int max = begin;
//		for (i = begin; i <= end; i++)
//		{
//			if (arr[i] < arr[min])
//			{
//				min = i;
//			}
//			if (arr[i] > arr[max])
//			{
//				max = i;
//			}
//		}
//		swap(&arr[begin], &arr[min]);
//		if (arr[max] > arr[end])//当max出现在begin的位置，min出现在end的位置会发生错误，会多交换一次
//		{
//			swap(&arr[end], &arr[max]);
//		}
//		begin++;
//		end--;
//	}
//}

//直接选择排序
void SelectSort(int* arr, int n)
{
	int begin = 0; 
	int end = n - 1;
	int i = 0;
	while (begin < end)
	{
		int min = begin;
		int max = begin;
		for (i = begin; i <= end; i++)
		{
			if (arr[i] < arr[min])
			{
				min = i;
			}
			if (arr[i] > arr[max])
			{
				max = i;
			}
		}
		swap(&arr[begin], &arr[min]);
		if (max == begin)//如果最大值出现在begin的位置，需要重新更改一下max的位置
		{
			max = min;
		}
		swap(&arr[end], &arr[max]);
		end--;
		begin++;
	}
}

void Print(int* arr ,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void SelectSortText(int* arr, int n)
{
	SelectSort(arr, n);
	Print(arr, n);
}

//直接插入排序
void InsertSort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (tmp < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}

void InsertSortText(int* arr, int n)
{
	InsertSort(arr, n);
	Print(arr, n);
}

//希尔排序
void SellSort(int* arr, int n)
{
	int gap = n;//当gap=1时就是直接插入排序
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		//一趟排序
		for (int i = 0; i < n - gap; i++)//gap组一起排序，i < n-gap防止数组越界
		{
			int end = i;
			int tmp = arr[end + gap];//将要插入的数先存起来
			while (end >= 0)
			{
				if (arr[end] > tmp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tmp;
		}
	}
}


void SellSortText(int* arr, int n)
{
	SellSort(arr, n);
	Print(arr, n);
}

//冒泡排序             ，  
void BubbleSort(int* arr, int n)
{
	for (int i = 1; i < n; i++)//交换的趟数
	{
		for (int j = 0; j < n - i; j++)//一趟排序交换的次数
		{
			if (arr[j] > arr[j + 1])//前面的元素大与后面的元素就交换位置
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}	
}

void BubbleSortText(int* arr, int n)
{
	BubbleSort(arr, n);
	Print(arr, n);
}

//向下调整算法
void AdjustDown(int* arr, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (arr[parent] < arr[child])//arr[paretnt] < arr[child]建大堆，否则建小堆
		{
			swap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

////向上调整算法
//void AdjustUp(int* arr, int child)
//{
//	int parent = (child - 1) / 2;
//	while(parent >= 0)
//	{
//		if (arr[parent] < arr[child])
//		{
//			swap(&arr[parent], &arr[child]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}

void HeapSort(int* arr, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);//升序建大堆，降序建小堆
	}
	int end = n - 1;//将最大的元素排除在下一次排序之外
	while (end > 0)
	{
		swap(&arr[0], &arr[end]);//交换arr[0]和arr[end]的元素，把最大的元素放最后
		AdjustDown(arr, end, 0);//将剩下的n-1个元素在建一次大堆
		end--;
	}
}

void HeapSortText(int* arr, int n)
{
	HeapSort(arr, n);
	Print(arr, n);
}