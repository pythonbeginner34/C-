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

//�����㷨�����ǣ�����������Ϊ��ѻ���С��
void Adjustdown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)//child+1���ܷ���whileѭ�����жϣ���Ϊ�����������while�ﵱһ��������������ʱ������ӽ��С�ڸ��ڵ�Ļ�������child+1Խ����ʣ��޷����н���
	{
		if (child + 1 < n && a[child + 1] > a[child])//����a[child]��a[child+1]ҪС��ͨ�������ȽϿ����ҵ�������֮���С��
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


//��ʼ����
void HeapInit(HP* php, HPDataType* a, int n);
//���ٶ�
void HeapDestroy(HP* php);
//����x��������Ȼ�Ƕ�
void HeapPush(HP* php, HPDataType x);
//ɾ���Ѷ�Ԫ�ر�������Ȼ�Ƕ�
void HeapPop(HP* php);
//��ȡ�Ѷ�Ԫ�أ�����ֵ
void HeapTop(HP* php);
//�ж϶��Ƿ�Ϊ��
void HeapEmpty(HP* php);


