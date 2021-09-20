#pragma once
#include<stdio.h>
#include"stack.h"

void SelectSort(int* arr, int n);
void SelectSortText(int* arr, int n);

void InsertSort(int* arr, int n);
void InsertSortText(int* arr, int n);

void SellSort(int* arr, int n);
void SellSortText(int* arr, int n);

void HeapSort(int* arr, int n);
void HeapSortText(int* arr, int n);

void Print(int* arr, int n);
int PartSort1(int* arr, int left, int right);
int PartSort2(int* arr, int left, int right);
int PartSort3(int* arr, int left, int right);
void PartSortText(int* arr, int left, int right, int n);
void QuickSort(int* arr, int left, int right);
void QuickSortText(int* arr, int left, int right, int n);
void QuickSortNonR(int* arr, int left, int right);
void QuickSortNonRText(int* arr, int left, int right, int n);
void _MergeSort(int* arr, int left, int right, int* tmp);
void MergeSort(int* arr, int n);
void MergeSortText(int* arr, int n);
void CountSort(int* arr, int n);
void CountSortText(int* arr, int n);