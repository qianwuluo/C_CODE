#include"SList.h"


void TestList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 0);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}
void TestList2()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

void TestList3()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	//在3的前面插入30
	SLTNode* pos = SListFind(plist, 3);
	/*if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);
	pos = SListFind(plist, 30);
	if (pos)
	{
		SListInsert(&plist, pos, 1);
	}
	pos = SListFind(plist, 3);*/
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);
}
void TestList4()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SLTNode* pos = SListFind(plist, 2);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);
	pos = SListFind(plist, 3);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

}
int main(void)
{
	TestList3();
	return 0;
}