#define _CRT_SECURE_NO_WARNINGS 1
//#include"stack.h"
//
//void StackInit(ST* ps)
//{
//	ps->a = NULL;
//	ps->top = 0;
//	//ps->top = -1   //这里也可以让top初始化为-1，这会在增加元素时看见差别
//	ps->capacity = 0;
//}
//
//void StackDestory(ST* ps)
//{
//	assert(ps);
//	if (ps->a)
//	{
//		free(ps->a);
//	}
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//	printf("栈销毁成功!");
//}
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)//top == 0时
//	//if(ps->top == ps->capacity -1)//top == -1时
//	{
//		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
//		STDataType* ptr = (STDataType*)realloc(ps->a, newcapacity * sizeof(STDataType));
//		if (ptr == NULL)
//		{
//			printf("ralloc tail!\n");
//			exit(-1);
//		}
//		ps->a = ptr;
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = x;//ps->a[ps->top++] = x;
//	ps->top++;
//	//ps->top++;
//	//ps->a[ps->top] = x;//ps->a[++ps->top] = x;
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//
//void StackPop(ST* ps ,STDataType* x)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	*x = ps->a[--ps->top];
//}
//
//int StackTop(ST* ps)
//{
//	assert(ps);
//	return ps->a[ps->top - 1];
//}
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//	return ps->top;//ps->top == 0时
//	//return ++ps->top //ps->top = -1时
//}