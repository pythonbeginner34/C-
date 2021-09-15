#include"sort.h"

int main()
{
	int arr[] = { 95,45,54,65,43,22,87,26,23,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//SelectSortText(arr, size);//÷±Ω”—°‘Ò≈≈–Ú
	//InsertSortText(arr, size);//÷±Ω”≤Â»Î≈≈–Ú
	//SellSortText(arr, size);//œ£∂˚≈≈–Ú
	//BubbleSortText(arr, size);//√∞≈›≈≈–Ú
	HeapSortText(arr, size);
	return 0;
}