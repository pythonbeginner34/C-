#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<assert.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

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
		if (child + 1 < n && a[child + 1] > a[child])//假设a[child]比a[child+1]要小，通过这样比较可以找到两则者之间更小的
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


//初始化堆
void HeapInit(HP* php, HPDataType* a, int n);
//销毁堆
void HeapDestroy(HP* php);
//插入x保持它仍然是堆
void HeapPush(HP* php, HPDataType x);
//删除堆顶元素保持它仍然是堆
void HeapPop(HP* php);
//获取堆顶元素，即最值
void HeapTop(HP* php);
//判断堆是否为空
void HeapEmpty(HP* php);


