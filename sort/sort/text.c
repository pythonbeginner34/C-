#include"sort.h"

int main()
{
	int arr[] = { 95,45,54,65,43,22,87,26,23,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//SelectSortText(arr, size);//ֱ��ѡ������
	//InsertSortText(arr, size);//ֱ�Ӳ�������
	//SellSortText(arr, size);//ϣ������
	//BubbleSortText(arr, size);//ð������
	HeapSortText(arr, size);
	return 0;
}