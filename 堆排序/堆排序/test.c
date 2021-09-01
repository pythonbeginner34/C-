#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

//�����㷨�����ǣ�����������Ϊ��ѻ���С��
void Adjustdown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)//child+1���ܷ���whileѭ�����жϣ���Ϊ�����������while�ﵱһ��������������ʱ������ӽ��С�ڸ��ڵ�Ļ�������child+1Խ����ʣ��޷����н���
	{
		if (child+1 < n && a[child + 1] > a[child])//����a[child]��a[child+1]ҪС��ͨ�������ȽϿ����ҵ�������֮���С��
			//child+1�п��ܻ�Խ��
		{
			child++;
		}
		if (a[child] > a[parent])//�ø��ڵ���ӽڵ�Ƚϣ�����ӽڵ�С�ڸ��ڵ㣬���ø��ӽ�㽻��λ�ã���������ѭ����
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

void HeapSort(int* a, int n)//�������С�ѣ�������ý���
{
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)//���ѣ��Ӻ���ǰ����
	{
		Adjustdown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		Adjustdown(a, end, 0);//����Ҫ�ȵ���һ�Σ���Ϊend�������һ��Ԫ���±꣬Adjustdown��ʹ��endʱ�൱�ڰ����һ��Ԫ���ų����ڵ���
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