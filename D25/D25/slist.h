#ifndef _SLIST_H_
#define _SLIST_H_
/*
�������
for(cur = head; cur; cur = cur->next) ��ͷ�����ѭ������
{
cur;
}
for(cur = head->next; cur != head; cur = cur->next) ��ͷ˫��ѭ������
{
cur;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType _data;
	struct SListNode* _next;
}SListNode;

typedef struct SList {
	SListNode* _head;
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);

SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);
SListNode* SListFind(SList* plist, SLTDataType x);
void SListInsertAfter(SListNode* pos, SLTDataType x);
void SListEraseAfter(SListNode* pos);
void SListRemove(SList* plist, SLTDataType x);

void SListPrint(SList* plist);
void TestSList();

#endif //_SLIST_H_