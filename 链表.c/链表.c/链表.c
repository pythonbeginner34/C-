//#define _CRT_SECURE_NO_WARNINGS 1
////ͷɾ
//void SlistPOpFront(SLTNode** pphead)
//{
//	assert(pphead);
//	assert(*pphead);//û�нڵ�ʱ
//	if ((*pphead)->Next == NULL)//ֻ��һ���ڵ�
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else//�ж���ڵ�
//	{
//		SLTNode* next = (*pphead)->Next;
//		free(*pphead);
//		*pphead = ptr;
//	}
//}