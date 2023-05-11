#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

SLTNode* BuyListNode(SLDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushBack(SLTNode** pphead, SLDataType x)
{
	SLTNode* newnode = BuyListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else {
		SLTNode* tail = *pphead;
		//站到尾结点的指针
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//尾结点，链接新节点
		tail->next = newnode;
	}
	   
}


void SListPushFront(SLTNode** pphead, SLDataType x)
{
	SLTNode* newnode = BuyListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;

}


void SListPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SListPopBack(SLTNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else {
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;

	}
}

SLTNode* SListFind(SLTNode* phead, SLDataType x)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data = x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListInsert(SLTNode** pphead, SLTNode* pos, SLDataType x)
{
	if (pos == *pphead)
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = BuyListNode(x);
		SLTNode* prev = *pphead;

		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}

}

void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (pos == *pphead)
	{
		SListPopFront(pphead);
	}
	else 
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
	
}