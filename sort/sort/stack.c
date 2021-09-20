#include"stack.h"

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackDestory(ST* ps)
{
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
	}
	ps->a = NULL;
	ps->top = 0;//当top为0时最后top会指向最后一个元素的下一位，如果top为-1则最后top指向最后一个元素。
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//检查容量够不够，不够就增容。
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;//top为0时
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	--ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

int Stacksize(ST* ps)
{
	assert(ps);
	return ps->top;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}