#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"MailList.h"

struct MailList g_allMSG[1000];
int g_count;

int menu()
{
	int tmp, ret;
	printf("1.�����ϵ����Ϣ\n"
		"2.ɾ��ָ����ϵ����Ϣ\n"
		"3.����ָ����ϵ����Ϣ\n"
		"4.�޸�ָ����ϵ����Ϣ\n"
		"5.��ʾ������ϵ����Ϣ\n"
		"6.���������ϵ����Ϣ\n"
		"������ѡ��: ");
	ret = scanf("%d", &tmp);
	return ret ? tmp : -1;
}

void MailList()
{
	int op;
	while (1)
	{
		op = menu();
		switch (op)
		{
		case ADD_MSG:
			inputData();
			break;
		case DELETE_MSG:
			break;
		case SEARCH_MSG:
			break;
		case CHANGE_MSG:
			break;
		case DISPLAY_MSG:
			outputData();
			break;
		case EMPTY_MSG:
			break;
		case -1:
			printf("��������,����������\n");
			break;
		default:
			printf("��������,����������\n");
		}	
	}		
}	

int main()
{
	MailList();
	return 0;
}