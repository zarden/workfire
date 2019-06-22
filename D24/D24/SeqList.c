#include"SeqList.h"

void SeqListInit(SeqList* psl, size_t capicity)
{
	assert(psl);
	psl->capicity = capicity;
	psl->array = (SLDataType *)malloc(capicity*sizeof(SLDataType));
	assert(psl->array);
	psl->size = 0;
}

void SeqListDestory(SeqList* psl)
{
	assert(psl);
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->size = 0;
		psl->capicity = 0;
	}
}

void CheckCapicity(SeqList* psl)
{
	assert(psl);
	if (psl->size == psl->capicity)
	{
		psl->capicity *= 2;
		psl->array = (SLDataType *)realloc(psl->array, psl->capicity*sizeof(SLDataType));
	}
}

//尾插
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapicity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}

//释放尾部元素
void SeqListPopBack(SeqList* psl)
{
	assert(psl || psl->size);
	psl->size--;
}

//头插
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapicity(psl);
	int i;
	for (i = psl->size - 1; i >= 0; i--)  //向后移动
	{
		psl->array[i + 1] = psl->array[i];
		psl->array[0] = x;
		psl->size++;
	}
}

//头删
void SeqListPopFront(SeqList* psl)
{
	assert(psl);
	psl->size--;
	int i;
	for (i = 0; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
}

int SeqListFind(SeqList* psl, SLDataType x)
{
	assert(psl);
	int i;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl || pos <= psl->size);
	CheckCapicity(psl);
	int i;
	for (i = psl->size - 1; i >= pos; i--)  //向后移动
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl || pos < psl->size);
	psl->size--;
	int i;
	for (i = pos; i < psl->size; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}	


 void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
 {
	 assert(psl || pos < psl->size);
	 psl->array[pos - 1] = x;
 }


 void SeqListRemove(SeqList* psl, SLDataType x)
 {
	 void SeqListRemove(SeqList* psl, SLDataType x)
 }
void SeqListPrint(SeqList* psl)
{
	assert(psl);
	int i;
	for (i = 0; i < psl->size; i++)
	{
		printf("%d", psl->array[i]);
		putchar('\n');
	}
}

void SeqListBubbleSort(SeqList* psl)
{
	int i, j;
	SLDataType	tmp;
	for ()
}

int SeqListBinaryFind(SeqList* psl, SLDataType x)
{
	int left = 0;
	int right = psl->size - 1;
	int mid;
	while (left <= right)
	{
		mid = (ieft + right) / 2;
		if (psl->array[mid] < x)
		{
			left = mid + 1;
		}
		else if (psl->array[mid] >x)
		{
			right = mid - 1;
		}
		else mind = x;
	}
	return -1;
}
