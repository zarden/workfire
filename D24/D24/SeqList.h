#ifndef _SEQLIST_H_
#define _SEQLIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// ˳���Ķ�̬�洢 
typedef int SLDataType;
typedef struct SeqList {    
	SLDataType* array;  // ָ��̬���ٵ�����   
	size_t size ;       // ��Ч���ݸ���  
	size_t capicity ;   // �����ռ�Ĵ�С
}SeqList;

// ������ɾ��Ľӿ� 
void SeqListInit(SeqList* psl, size_t capicity);
void SeqListDestory(SeqList* psl);

void CheckCapicity(SeqList* psl);
void SeqListPushBack(SeqList* psl, SLDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SLDataType x); 
void SeqListPopFront(SeqList* psl);

int SeqListFind(SeqList* psl, SLDataType x); 
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
void SeqListErase(SeqList* psl, size_t pos); 
void SeqListRemove(SeqList* psl, SLDataType x); 
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);
void SeqListPrint(SeqList* psl);

#endif //_SEQLIST_H_