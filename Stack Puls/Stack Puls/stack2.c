#define _CRT_SECURE_NO_WARNINGS 1
#include"stack2.h"

void StackInit(Sqstack* ps)
{
	assert(ps);
	ps->top = -1;
}

//使用静态顺序表不需要销毁空间，因为数据在栈区开辟可以自己回收

void StackPush(Sqstack* ps, STDataType x)
{
	assert(ps);
	if (ps->top == MaxSize - 1)
	{
		printf("Push fail\n");
		exit(-1);
	}
	ps->top++;
	ps->data[ps->top] = x;
	//ps->data[++ps->top] = x;
}

void StackPop(Sqstack* ps, STDataType* x)
{
	assert(ps);
	if (ps->top == -1)
	{
		printf("Pop fail\n");
		exit(-1);
	}
	*x = ps->data[ps->top];
	ps->top--;
	//x = ps->data[ps->top--];
}

bool StackEmpty(Sqstack* ps)
{
	assert(ps);
	return ps->top == -1;
}

int StackSize(Sqstack* ps)
{
	assert(ps);
	return ps->top + 1;
}

STDataType StackTop(Sqstack* ps)
{
	assert(ps);
	return ps->data[ps->top];
}