//#define _CRT_SECURE_NO_WARNINGS 1
////头删
//void SlistPOpFront(SLTNode** pphead)
//{
//	assert(pphead);
//	assert(*pphead);//没有节点时
//	if ((*pphead)->Next == NULL)//只有一个节点
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else//有多个节点
//	{
//		SLTNode* next = (*pphead)->Next;
//		free(*pphead);
//		*pphead = ptr;
//	}
//}