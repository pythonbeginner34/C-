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
//		if (arr[max] > arr[end])//��max������begin��λ�ã�min������end��λ�ûᷢ�����󣬻�ཻ��һ��
//		{
//			swap(&arr[end], &arr[max]);
//		}
//		begin++;
//		end--;
//	}
//}

//ֱ��ѡ������
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
		if (max == begin)//������ֵ������begin��λ�ã���Ҫ���¸���һ��max��λ��
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

//ֱ�Ӳ�������
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

//ϣ������
void SellSort(int* arr, int n)
{
	int gap = n;//��gap=1ʱ����ֱ�Ӳ�������
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		//һ������
		for (int i = 0; i < n - gap; i++)//gap��һ������i < n-gap��ֹ����Խ��
		{
			int end = i;
			int tmp = arr[end + gap];//��Ҫ��������ȴ�����
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

//ð������             ��  
void BubbleSort(int* arr, int n)
{
	for (int i = 1; i < n; i++)//����������
	{
		for (int j = 0; j < n - i; j++)//һ�����򽻻��Ĵ���
		{
			if (arr[j] > arr[j + 1])//ǰ���Ԫ�ش�������Ԫ�ؾͽ���λ��
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

//���µ����㷨
void AdjustDown(int* arr, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (arr[parent] < arr[child])//arr[paretnt] < arr[child]����ѣ�����С��
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

////���ϵ����㷨
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
		AdjustDown(arr, n, i);//���򽨴�ѣ�����С��
	}
	int end = n - 1;//������Ԫ���ų�����һ������֮��
	while (end > 0)
	{
		swap(&arr[0], &arr[end]);//����arr[0]��arr[end]��Ԫ�أ�������Ԫ�ط����
		AdjustDown(arr, end, 0);//��ʣ�µ�n-1��Ԫ���ڽ�һ�δ��
		end--;
	}
}

void HeapSortText(int* arr, int n)
{
	HeapSort(arr, n);
	Print(arr, n);
}