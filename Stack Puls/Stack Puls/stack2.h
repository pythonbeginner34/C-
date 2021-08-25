#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#define MaxSize 10

typedef int STDataType;
typedef struct stack
{
	STDataType data[MaxSize];
	int top;
}Sqstack;


void StackInit(Sqstack* ps);
void StackPop(Sqstack* ps, STDataType* x);
void StackPush(Sqstack*, STDataType x);
int  StackTop(Sqstack* ps);
bool StackEmpty(Sqstack* ps);
int  StackSize(Sqstack* ps);