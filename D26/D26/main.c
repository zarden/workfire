#include"List.h"

int main()
{
	List list;
	ListInit(&list);
	ListPushFront(&list, 7);
	ListPushFront(&list, 6);
	ListPushFront(&list, 5);
	ListPushFront(&list, 4);
	ListPrint(&list);
	ListPopBack(&list);
	ListPrint(&list);
	ListPopFront(&list);
	ListPrint(&list);

	ListDestory(&list);
	system("pause");
	return 0;

}