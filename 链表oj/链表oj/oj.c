#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0, dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] == val)
//		{
//			src++;
//		}
//		else
//		{
//			nums[dst++] = nums[src++];
//		}
//	}
//	return dst;
//}

//给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

//int removeDuplicates(int* nums, int numsSize)
//{
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	int src = 0, dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] == nums[dst])
//		{
//			src++;
//		}
//		else
//		{
//			dst++;
//			nums[dst] = nums[src];
//			src++;
//		}
//	}
//	return dst + 1;
//}

//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。

//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。你可以假设 nums1 的空间大小等于 m + n，这样它就有足够的空间保存来自 nums2 的元素。
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int i1 = m - 1, i2 = n - 1;
//	int dst = m + n - 1;
//	//把两个数组中大的元素拷到第一个数组的结尾
//	while (i1 >= 0 && i2 >= 0)
//	{
//		if (nums1[i1] > nums2[i2])
//		{
//			nums1[dst--] = nums1[i1--];
//		}
//		else
//		{
//			nums1[dst--] = nums2[i2--];
//		}
//	}
	//如果使i1先小于零说明i1最小的元素要大于i2最小的元素，要把i2里剩余的元素拷到dst的位置
	//如果i2先小于零说明i2最小的元素小于等于i1中的某个元素，可以和不做处理。
//	while (i2 >= 0)
//	{
//		nums1[dst--] = nums2[i2--];
//	}
//}




////给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
////方法一 利用创建新链表将不是val值的数放到新链表来操作
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    //把链表中还不是val的值尾插到一个新的链表中，是Val的值释放掉。
//    struct ListNode* cur = head;
//    struct ListNode* tail = NULL, * newhead = NULL;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        if (cur->val == val)
//        {
//            free(cur);
//        }
//        else
//        {
//            if (tail == NULL)
//            {
//                newhead = tail = cur;//new的目的是返回一个新的链表的头
//            }
//            else
//            {
//                tail->next = cur;
//                tail = cur;
//            }
//        }
//        cur = next;
//    }
//    if (tail)//最后要要把尾置空
//    {
//        tail->next = NULL;
//    }
//    return newhead;
//}
//
////方法二 利用目标位置前一个指针来删除val
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    while (head != NULL && head->val == val)
//    {
//        head = head->next;
//    }
//
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head;
//    while (cur && cur->next)
//    {
//        if ((cur->next)->val == val)
//        {
//            struct ListNode* prev = cur;
//            struct ListNode* next = cur->next;
//            prev->next = next->next;
//        }//要查下一个节点的值是否是val后在将cur向后移，有可能会val相邻的情况，如果直接将cur向移动cur->next的时候会跳过这个val，所以要在进行一次判断后在移动。
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    return head;
//}



//链表反转方法一：
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	if (head->next == NULL)
//	{
//		return head;
//	}
//	struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next;
//	while (n2)
//	{
//		n2->next = n1;
//		n1 = n2;
//		n2 = n3;
//		if (n3)
//		{
//			n3 = n3->next;
//		}
//	}
//	return n1;
//}

//方法二：头插法
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* newnode = NULL;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = newnode;
//		newnode = cur;
//		cur = next;
//	}
//	return newnode;
//}

//匹配括号问题利用队列解决
//typedef char STDataType;
//
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void StackInit(ST* ps);
//void StackDestory(ST* ps);
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST*);
//bool StackEmpty(ST* ps);
//int Stacksize(ST* ps);
//STDataType StackTop(ST* ps);
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->top = 0;
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
//	ps->top = 0;//当top为0时最后top会指向最后一个元素的下一位，如果top为-1则最后top指向最后一个元素。
//	ps->capacity = 0;
//}
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//	//检查容量够不够，不够就增容。
//	if (ps->top == ps->capacity)
//	{
//		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
//		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newcapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = x;//top为0时
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	--ps->top;
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//
//int Stacksize(ST* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	return ps->a[ps->top - 1];
//}
//
//
//
//bool isValid(char* s)
//{
//	ST st;
//	StackInit(&st);
//	bool match = true;
//	while (*s)
//	{
//		if (*s == '[' || *s == '(' || *s == '{')//左括号入栈右括号出栈
//		{
//			StackPush(&st, *s);
//			++s;
//		}
//		else
//		{
//			if (StackEmpty(&st))
//			{
//				match = false;
//				break;
//			}
//			char ch = StackTop(&st);
//			StackPop(&st);
//			if ((*s == ']' && ch != '[')
//				|| (*s == '}' && ch != '{')
//				|| (*s == ')' && ch != '('))
//			{
//				match = false;
//				break;
//			}
//			else
//			{
//				++s;
//			}
//		}
//	}
//	if (match == true)
//	{
//		match = StackEmpty(&st);
//	}
//	StackDestory(&st);
//	return match;
//}


//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点
//利用快慢指针解决本题
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head;
//	struct ListNode* fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}

//方法二：先遍历链表得出链表长度后，以链表长度/2 +1为长度在遍历一遍链表
//struct ListNode* middleNode(struct ListNode* head)
//{
//	int numsSize = 0;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		numsSize++;
//		cur = cur->next;
//	}
//	int mid = numsSize / 2 + 1;
//	while (--mid)
//	{
//		head = head->next;
//	}
//	return head;
//}


//输入一个链表，输出该链表中倒数第k个结点。
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//	struct ListNode* fast = pListHead;
//	struct ListNode* slow = pListHead;
//	while (k--)//遍历一边链表判段k和链表长度的关系，如果k大于链表长度，则返回NULL,否则先让fast走k步
//	{
//		if (fast == NULL)
//		{
//			return NULL;
//		}
//		fast = fast->next;
//	}
//	while (fast)//走到这说明k小于链表长度，发fast已经走了k步，fast和slow之间的距离为k，让fast走到链表终点后
// //fast和slow之间的距离仍是k，此时slow的位置为倒数第k位
//	{
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}



//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//方法一：
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)
//	{
//		return l2;
//	}
//	if (l2 == NULL)
//	{
//		return l1;
//	}
//	struct ListNode* tail = NULL, * newhead = NULL;
//	struct ListNode* cur1 = l1, * cur2 = l2;
//	while (cur1 && cur2)//不预先比较大小，在循环时进行比较
//	{
//		if (cur1->val > cur2->val)
//		{
//			if (tail == NULL)
//			{
//				tail = newhead = cur2;
//			}
//			else
//			{
//				tail->next = cur2;
//				tail = cur2;
//			}
//			cur2 = cur2->next;
//		}
//		else
//		{
//			if (tail == NULL)
//			{
//				tail = newhead = cur1;
//			}
//			else
//			{
//				tail->next = cur1;
//				tail = cur1;
//			}
//			cur1 = cur1->next;
//		}
//	}
//	if (cur1)
//	{
//		tail->next = cur1;
//	}
//	if (cur2)
//	{
//		tail->next = cur2;
//	}
//	return newhead;
//}

//方法二：
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL)//判断l1是否为空，如果为空，返会l2
//	{
//		return l2;
//	}
//	if (l2 == NULL)//判断l2是否为空，如果为空，返回l1
//	{
//		return l1;
//	}
//	struct ListNode* newhead = NULL, * tail = NULL;
//	struct ListNode* cur1 = l1, * cur2 = l2;
//	if (cur1->val < cur2->val)//先比较链表的首元素找出小的那个作为新链表的头
//	{
//		newhead = tail = cur1;
//		cur1 = cur1->next;
//	}
//	else
//	{
//		newhead = tail = cur2;
//		cur2 = cur2->next;
//	}//找到小的元素作为新链表的首元素后将原链表的下一个元素作为首元素，进行后面的比较，相对与方法1，省去了每次都要判断tail是否为NULL的情况
//	while (cur1 && cur2)//用尾插法来来连接两个链表
//	{
//		if (cur1->val < cur2->val)
//		{
//			tail->next = cur1;
//			tail = cur1;
//			cur1 = cur1->next;
//		}
//		else
//		{
//			tail->next = cur2;
//			tail = cur2;
//			cur2 = cur2->next;
//		}
//	}
//	if (cur1)//如果cur1不为空说明cur2为空，将cur1连接到tail后面
//	{
//		tail->next = cur1;
//	}
//	if (cur2)//如果cur2不为空说明cur1为空，将cur1连接到tail后面
//	{
//		tail->next = cur2;
//	}
//	return newhead;
//}
