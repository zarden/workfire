#ifndef _DEQUEUE_H
#define _DEQUEUE_H

#include <stdio.h>
#include<stdlib.h>

#define QUEUENUM 100
typedef int DataType;

typedef struct{
	DataType _data[QUEUENUM];
	DataType *head;
	DataType *tail;
	size_t _size;
}dequeue;

void dequeueInit(dequeue *qu);
void dequeueDestory(dequeue *qu);
void dequeueEmpty(dequeue *qu);

void dequeuePush(dequeue *qu, DataType x);//进队列
void dequeuePop(dequeue *qu, DataType x);//出队列

DataType dequeueFront(dequeue *qu);
DataType dequeueBank(dequeue *qu);
int dequeueIsEmpty(dequeue *qu);
size_t	dequeueSize(dequeue *qu);


#endif //_DEQUEUE_H