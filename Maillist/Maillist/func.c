#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"MailList.h"

void inputData()
{
	printf("����������:\n");
	scanf("%49s", &g_allMSG[g_count].name);
	getchar();
	printf("�������Ա�(f/m):\n");
	scanf("%c", &g_allMSG[g_count].gender);
	printf("����������:\n");
	scanf("%d", &g_allMSG[g_count].age);
	printf("������绰����:\n");
	scanf("%29s", &g_allMSG[g_count].telnum);
	printf("�������ַ:\n");
	scanf("%199s", &g_allMSG[g_count].addr);
	g_count++;
}

void outputData()
{
	int i;
	printf("  ����    �Ա� ����   �绰        סַ\n");
	for (i = 0; i < g_count; i++)
	{
		printf("%-10s %3c %3d %11s %s\n",
			g_allMSG[i].name,
			g_allMSG[i].gender,
			g_allMSG[i].age,
			g_allMSG[i].telnum,
			g_allMSG[i].addr);
	}
}