#define _CRT_SECURE_NO_WARNINGS 1
#include"stack2.h"

int main()
{
	Sqstack st;
	int x = 0;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	printf("%d\n", StackTop(&st));
	StackPop(&st,&x);
	printf("%d\n", x);
	StackPush(&st, 5);
	StackPush(&st, 6);
	while (!StackEmpty(&st))
	{
		StackPop(&st, &x);
		printf("%d ", x);
	}
	printf("\n");
	return 0;
}