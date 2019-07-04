#include"dequeue.h"

void dequeueInit(dequeue *qu)
{
	qu->head = qu->tail = qu->_data;
	qu->_size = 0;
}

void dequeueDestory(dequeue *qu)
{
	qu->head = qu->tail = qu->_data;
	qu->_size = 0;
}

void dequeueEmpty(dequeue *qu)
{
	qu->head = qu->tail;
	qu->_size = 0;
}

void dequeuePush(dequeue *qu, DataType x)
{
	*qu->tail = x;

	if (qu->tail + 1 == qu->head || qu->tail + 1 - qu->_data == QUEUENUM && qu->head == qu->_data)
	{
		return -1;
	}
	qu->tail++;
	if (qu->tail - qu->_data == QUEUENUM)
	{
		qu->tail = qu->_data;
	}
	qu->_size++;
	return 0;
}

void dequeuePop(dequeue *qu, DataType x)
{
	qu->head++;
	if (qu->tail - qu->_data == QUEUENUM)// 尾指针从头头开始
	{
		qu->head = qu->_data;
	}
	qu->_size--;
}

DataType dequeueFront(dequeue *qu)
{
	return *qu->head;
}

DataType dequeueBank(dequeue *qu)
{
	if (qu->tail == qu->_data)
	{
		return qu->_data[QUEUENUM - 1];
	}
	return qu->tail[-1];
}

int dequeueIsEmpty(dequeue *qu)
{
	return qu->head = qu->tail;
}

size_t	dequeueSize(dequeue *qu)
{
	return qu->_size;
}

//1.用队列实现栈
/*for (i = 0; i < size - 1; i++)
{
	x = dequeueFront(qu1);
	dequeuePop(qu1);
	dequeuePush(qu2, x);
}
data = dequeueFront(qu1);
dequeue(qu1);
qu1 = qu2;

//2.用栈实现队列
for (i = 0; i < size - 1; i++)
{
	x = stackValue(st1);
	stackPop(st1);
	stackPush(st2, x);
}
data = stackValue(st1);
stackPop(st1);
for (i = 0; i < size - 1; i++)
{
	x = stackValue(st2);
	stackPop(st2);
	stackPush(st1, x);
}*/

