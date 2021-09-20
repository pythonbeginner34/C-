#include"sort.h"
#include"stack.h"

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
		int flag = 0;//设置一个标志，当出现前面一个元素比后面大时交换元素flag被置为1；
		for (int j = 0; j < n - i; j++)//一趟排序交换的次数
		{
			if (arr[j] > arr[j + 1])//前面的元素大于后面的元素就交换位置
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)//如果要排序的数为升序，则直接跳出循环
		{
			break;
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

//void PartSort(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int key = left;
//	while (left < right)
//	{
//		if (arr[right] < arr[key])
//		{
//			left++;
//			while (left < right)
//			{
//				if (arr[left] > arr[key])
//				{
//					swap(&arr[left], &arr[right--]);
//					break;
//				}
//				else
//				{
//					left++;
//				}
//			}
//		}
//		else
//		{
//			right--;
//		}
//	}
//	swap(&arr[left], &arr[key]);
//}
int ThreeNumberTake(int* arr, int left, int right)//在左中右三个位置处选择数字中间大的数字作为PartSort排序中的key
{
	int mid = (left + right) / 2;
	if (arr[left] > arr[mid])
	{
		if (arr[mid] > arr[right])
		{
			mid = mid;
		}
		else if (arr[left] > arr[right])
		{
			mid = right;
		}
		else
		{
			mid = left;
		}
	}
	else if (arr[right] > arr[mid])
	{
		mid = mid;
	}
	else if (arr[left] > arr[right])
	{
		mid = right;
	}
	else
	{
		mid = left;
	}
	swap(&arr[left], &arr[mid]);//在不改变PartSort函数的情况下将中间值和下标为left的值进行交互
	return left;
}

//hoare法
int PartSort1(int* arr, int left, int right)
{
	int keyi = ThreeNumberTake(arr, left, right);//利用三数取中函数，将中间值下标赋给key
	while (left < right)
	{
		//在右边查找比key值小的数，并且保证left<right
		while (left < right && arr[right] >= arr[keyi])//跳过比key大或则等于key数，直到找到比key小的数
		{
			right--;
		}
		//在右边查找比key值大的数，并且保证left < right
		while (left < right && arr[left] <= arr[keyi])//跳过比key小或则等于key的数，直到找到比key大的数
		{
			left++;
		}
		swap(&arr[left], &arr[right]);
	}
	//因为右边先走，所以相遇时的数字一定比key要小
	//将key值与相遇时的值进行交换，此时key的值大致在中间位置
	swap(&arr[left], &arr[keyi]);
	return left;//返回相遇时的位置
}

//挖坑法
int PartSort2(int* arr, int left, int right)
{
	int keyi = ThreeNumberTake(arr, left, right);
	int key = arr[keyi];//先将arr[keyi]保存起来
	int hole = left;//假设挖坑的位置在left
	while (left < right)
	{
		while (left < right && arr[right] > key)//从右边找比key小的数
		{
			right--;
		}
		arr[hole] = arr[right];//找到之后进行假象的填坑操作，将原来存放arr[keyi]的位置进行覆盖
		hole = right;//然后假设被拿去填坑的数的位置为新的坑

		while (left < right && arr[left] < key)//从左边找比key值大的数
		{
			left++;
		}
		arr[hole] = arr[left];//找到后用当前位置的数去填坑，实际相当于将比key小的数放到了左边，比key大的数放到了右边
		hole = left;//再创建新的坑
	}
	arr[hole] = key;//用key的值去填坑
	return hole;//返回相遇时的位置
}

//int PartSort3(int* arr, int left, int right)
//{
//	int keyi= ThreeNumberTake(arr, left, right);//取最左边的值作为key，且key为中间大的值
//	int prev = left;//prev指向首元素位置
//	int cur = prev + 1;//cur指向prev后面一个元素的位置
//	while (cur <= right)//保证cur没有越界数组
//	{
//		if (arr[cur] < arr[keyi])//让cur去找比key小的元素
//		{
//			prev++;//找到后让prev向后移动一位
//			swap(&arr[prev], &arr[cur++]);//交换prev和cur位置的元素
//		}
//		else
//		{
//			cur++;//如果没有找到让cur++
//		}
//	}
//	swap(&arr[prev], &arr[keyi]);//将最后一个比key小的元素于key进行交换，达到左边比key小右边比key大
//	return prev;//返回当cur走到right时prev的位置，即最后一个比key小的元素的位置
//}

int PartSort3(int* arr, int left, int right)
{
	int keyi = ThreeNumberTake(arr, left, right);
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (arr[cur] < arr[keyi] && ++prev != cur)//查找比key小的元素，其中prev和cur紧挨着的元素不进行交换
		{
			swap(&arr[prev], &arr[cur]);
		}
		cur++;
	}
	swap(&arr[prev], &arr[keyi]);
	return prev;
}
//void PartSortText(int* arr, int left, int right,int n)
//{
//	PartSort(arr, left, right);
//	Print(arr, n);
//}

void QuickSort(int* arr, int left, int right)
{
	if (left >= right)//当left>=right时代表没有元素或则只有一个元素，作为递归结束的条件
	{
		return;
	}
	int keyi = PartSort3(arr, left, right);//先对整体进行一次PartSort
	QuickSort(arr, left, keyi - 1);//在对左半部分进行一次PartSort
	QuickSort(arr, keyi + 1, right);//在对右半部分进行一次PartSort
}

void QuickSortText(int* arr, int left, int right, int n)
{
	QuickSort(arr, left, right);
	Print(arr, n);
}

void QuickSortNonR(int* arr, int left, int right)
{
	ST st;
	StackInit(&st);
	StackPush(&st, right);
	StackPush(&st, left);
	
	while (!StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);
		int keyi = PartSort3(arr, left, right);
		if (keyi + 1< end)
		{
			StackPush(&st, end);
			StackPush(&st, keyi);
		}
		if (left < keyi - 1)
		{
			StackPush(&st, left);
			StackPush(&st, keyi - 1);
		}
	}
	StackDestory(&st);
}

//快速排序非递归
void QuickSortNonRText(int* arr, int left, int right, int n)
{
	QuickSort(arr, left, right);
	Print(arr, n);
}

//归并排序
void _MergeSort(int* arr, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	//通过递归将数组中元素分出
	_MergeSort(arr, left, mid, tmp);//分左半部分
	_MergeSort(arr, mid + 1, right, tmp);//分右半部分
	//归并
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)//通过比较将小的元素依次放到新的数组中
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[index++] = arr[begin1++];
		}
		else
		{
			tmp[index++] = arr[begin2++];
		}
	}
	//由于不是同时移动无法判断是哪一个数组先走完，后走完的数组要将余下的元素拷贝到新数组中
	while (begin1 <= end1)//判断前一个数组是否走完
	{
		tmp[index++] = arr[begin1++];//没走完将余下的元素拷贝到新数组
	}
	while (begin2 <= end2)//判断后一个数组是否走完
	{
		tmp[index++] = arr[begin2++];//没走完将余下的元素拷贝到新数组
	}
	for (int i = left; i <= right; i++)//将新数组中的元素拷贝到原来的数组中去
	{
		arr[i] = tmp[i];
	}
}
void MergeSort(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);//提前创建好空间防止在递归过程中每次都需要创建空间
	_MergeSort(arr, 0, n - 1, tmp);
	free(tmp);
}

void MergeSortText(int* arr, int n)
{
	MergeSort(arr, n);
	Print(arr, n);
}

void CountSort(int* arr, int n)
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	int range = max - min + 1;
	int* count = (int*)calloc(range, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		count[arr[i] - min]++;
	}
	int i = 0;
	for (int j = 0; j < range; j++)
	{
		while (count[j]--)
		{
			arr[i++] = j + min;
		}
	}
}

void CountSortText(int* arr, int n)
{
	CountSort(arr, n);
	Print(arr, n);
}