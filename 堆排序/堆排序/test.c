#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

//调整算法条件是：左右子树都为大堆或则小堆
void Adjustdown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)//child+1不能放在while循环里判断，因为入如果放在了while里当一棵树至于左子树时，如果子结点小于父节点的话，由于child+1越界访问，无法进行交换
	{
		if (child+1 < n && a[child + 1] > a[child])//假设a[child]比a[child+1]要小，通过这样比较可以找到两则者之间更小的
			//child+1有可能会越界
		{
			child++;
		}
		if (a[child] > a[parent])//让父节点和子节点比较，如果子节点小于父节点，则让父子结点交换位置，否则跳出循环。
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)//升序采用小堆，降序采用降序。
{
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)//建堆，从后往前调整
	{
		Adjustdown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		Adjustdown(a, end, 0);//这里要先调整一次，因为end数组最后一个元素下标，Adjustdown中使用end时相当于把最后一个元素排除后在调整
		end--;
	}
}

int main()
{
	int a[] = { 27, 37, 28, 18, 19, 34, 65, 25, 49, 15 };
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}