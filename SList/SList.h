#pragma once
#include<stdio.h>
#include<malloc.h>
typedef int SLDataType;

typedef struct SListNode
{

	SLDataType data;
	struct SListNode* next;//指向下一个结点的指针
}SLTNode;
void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLDataType x);
void SListPushFront(SLTNode** pphead, SLDataType x);
void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);
SLTNode* SListFind(SLTNode* phead,SLDataType x);
void SListInsert(SLTNode** pphead,SLTNode* pos,SLDataType x);
void SListErase(SLTNode** pphead, SLTNode* pos);