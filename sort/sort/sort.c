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
		int flag = 0;//����һ����־��������ǰ��һ��Ԫ�رȺ����ʱ����Ԫ��flag����Ϊ1��
		for (int j = 0; j < n - i; j++)//һ�����򽻻��Ĵ���
		{
			if (arr[j] > arr[j + 1])//ǰ���Ԫ�ش��ں����Ԫ�ؾͽ���λ��
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)//���Ҫ�������Ϊ������ֱ������ѭ��
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
int ThreeNumberTake(int* arr, int left, int right)//������������λ�ô�ѡ�������м���������ΪPartSort�����е�key
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
	swap(&arr[left], &arr[mid]);//�ڲ��ı�PartSort����������½��м�ֵ���±�Ϊleft��ֵ���н���
	return left;
}

//hoare��
int PartSort1(int* arr, int left, int right)
{
	int keyi = ThreeNumberTake(arr, left, right);//��������ȡ�к��������м�ֵ�±긳��key
	while (left < right)
	{
		//���ұ߲��ұ�keyֵС���������ұ�֤left<right
		while (left < right && arr[right] >= arr[keyi])//������key��������key����ֱ���ҵ���keyС����
		{
			right--;
		}
		//���ұ߲��ұ�keyֵ����������ұ�֤left < right
		while (left < right && arr[left] <= arr[keyi])//������keyС�������key������ֱ���ҵ���key�����
		{
			left++;
		}
		swap(&arr[left], &arr[right]);
	}
	//��Ϊ�ұ����ߣ���������ʱ������һ����keyҪС
	//��keyֵ������ʱ��ֵ���н�������ʱkey��ֵ�������м�λ��
	swap(&arr[left], &arr[keyi]);
	return left;//��������ʱ��λ��
}

//�ڿӷ�
int PartSort2(int* arr, int left, int right)
{
	int keyi = ThreeNumberTake(arr, left, right);
	int key = arr[keyi];//�Ƚ�arr[keyi]��������
	int hole = left;//�����ڿӵ�λ����left
	while (left < right)
	{
		while (left < right && arr[right] > key)//���ұ��ұ�keyС����
		{
			right--;
		}
		arr[hole] = arr[right];//�ҵ�֮����м������Ӳ�������ԭ�����arr[keyi]��λ�ý��и���
		hole = right;//Ȼ����豻��ȥ��ӵ�����λ��Ϊ�µĿ�

		while (left < right && arr[left] < key)//������ұ�keyֵ�����
		{
			left++;
		}
		arr[hole] = arr[left];//�ҵ����õ�ǰλ�õ���ȥ��ӣ�ʵ���൱�ڽ���keyС�����ŵ�����ߣ���key������ŵ����ұ�
		hole = left;//�ٴ����µĿ�
	}
	arr[hole] = key;//��key��ֵȥ���
	return hole;//��������ʱ��λ��
}

//int PartSort3(int* arr, int left, int right)
//{
//	int keyi= ThreeNumberTake(arr, left, right);//ȡ����ߵ�ֵ��Ϊkey����keyΪ�м���ֵ
//	int prev = left;//prevָ����Ԫ��λ��
//	int cur = prev + 1;//curָ��prev����һ��Ԫ�ص�λ��
//	while (cur <= right)//��֤curû��Խ������
//	{
//		if (arr[cur] < arr[keyi])//��curȥ�ұ�keyС��Ԫ��
//		{
//			prev++;//�ҵ�����prev����ƶ�һλ
//			swap(&arr[prev], &arr[cur++]);//����prev��curλ�õ�Ԫ��
//		}
//		else
//		{
//			cur++;//���û���ҵ���cur++
//		}
//	}
//	swap(&arr[prev], &arr[keyi]);//�����һ����keyС��Ԫ����key���н������ﵽ��߱�keyС�ұ߱�key��
//	return prev;//���ص�cur�ߵ�rightʱprev��λ�ã������һ����keyС��Ԫ�ص�λ��
//}

int PartSort3(int* arr, int left, int right)
{
	int keyi = ThreeNumberTake(arr, left, right);
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (arr[cur] < arr[keyi] && ++prev != cur)//���ұ�keyС��Ԫ�أ�����prev��cur�����ŵ�Ԫ�ز����н���
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
	if (left >= right)//��left>=rightʱ����û��Ԫ�ػ���ֻ��һ��Ԫ�أ���Ϊ�ݹ����������
	{
		return;
	}
	int keyi = PartSort3(arr, left, right);//�ȶ��������һ��PartSort
	QuickSort(arr, left, keyi - 1);//�ڶ���벿�ֽ���һ��PartSort
	QuickSort(arr, keyi + 1, right);//�ڶ��Ұ벿�ֽ���һ��PartSort
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

//��������ǵݹ�
void QuickSortNonRText(int* arr, int left, int right, int n)
{
	QuickSort(arr, left, right);
	Print(arr, n);
}

//�鲢����
void _MergeSort(int* arr, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	//ͨ���ݹ齫������Ԫ�طֳ�
	_MergeSort(arr, left, mid, tmp);//����벿��
	_MergeSort(arr, mid + 1, right, tmp);//���Ұ벿��
	//�鲢
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)//ͨ���ȽϽ�С��Ԫ�����ηŵ��µ�������
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
	//���ڲ���ͬʱ�ƶ��޷��ж�����һ�����������꣬�����������Ҫ�����µ�Ԫ�ؿ�������������
	while (begin1 <= end1)//�ж�ǰһ�������Ƿ�����
	{
		tmp[index++] = arr[begin1++];//û���꽫���µ�Ԫ�ؿ�����������
	}
	while (begin2 <= end2)//�жϺ�һ�������Ƿ�����
	{
		tmp[index++] = arr[begin2++];//û���꽫���µ�Ԫ�ؿ�����������
	}
	for (int i = left; i <= right; i++)//���������е�Ԫ�ؿ�����ԭ����������ȥ
	{
		arr[i] = tmp[i];
	}
}
void MergeSort(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);//��ǰ�����ÿռ��ֹ�ڵݹ������ÿ�ζ���Ҫ�����ռ�
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