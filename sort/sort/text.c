#include"sort.h"

int main()
{
	int arr[] = { 23,45,65,41,32,46,89,69,82,53 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//SelectSortText(arr, size);//ֱ��ѡ������
	//InsertSortText(arr, size);//ֱ�Ӳ�������
	//SellSortText(arr, size);//ϣ������
	//BubbleSortText(arr, size);//ð������
	//HeapSortText(arr, size);
	//PartSortText(arr, size);
	//QuickSortText(arr, 0, size - 1, size);
	//QuickSortNonRText(arr, 0, size - 1, size);
	//MergeSortText(arr, size);
	CountSortText(arr, size);
	return 0;
}