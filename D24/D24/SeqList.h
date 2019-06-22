#ifndef _SEQLIST_H_
#define _SEQLIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// 顺序表的动态存储 
typedef int SLDataType;
typedef struct SeqList {    
	SLDataType* array;  // 指向动态开辟的数组   
	size_t size ;       // 有效数据个数  
	size_t capicity ;   // 容量空间的大小
}SeqList;

// 基本增删查改接口 
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