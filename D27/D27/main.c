#include"dequeue.h"

int main()
{
	dequeue test;
	dequeueInit(&test);
	dequeuePush(&test, 1);
	dequeuePush(&test, 1);
	dequeuePush(&test, 1);
	dequeuePush(&test, 1);
	printf("%d\n", dequeueFront(&test));
	dequeuePush(&test, 1);
	system("pause");    
	return 0;
}