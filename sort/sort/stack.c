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
	ps->top = 0;//��topΪ0ʱ���top��ָ�����һ��Ԫ�ص���һλ�����topΪ-1�����topָ�����һ��Ԫ�ء�
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//������������������������ݡ�
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
	ps->a[ps->top] = x;//topΪ0ʱ
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