#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#if 0
int main(){
	int a = 3, b = 4, c = 5;
	while (a < b < c){
		int t = a;
		a = b;
		b = t;
		c--;
	}
	printf("%d,%d,%d", a, b, c);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 3, b = 0, c = 5;
	int n = 0;
	while (--a && ++b && c--)//ֻҪ��һ������0��ֹͣѭ��
		n++;
	printf("%d,%d,%d,%d\n", a, b, c, n);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 0x11223344;//С��->��λ�洢�ڵ�λ��ַ,��λ�洢�ڸ�λ��ַ
	short int b = a;//����Ӹߵ�ַ���͵�ַ,a�ߵ�ַb�͵�ַc���͵�ַ
	char c = a;//
	printf("%x,%x,%x\n", a, b, c);//�ó�����жϴ��С��
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 6;
	float b = 4.6;//�����ʹ洢SEM
	printf("%d\n", (int)b);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int i,  j;
	while (1){
		for (i = 0; i < 10; i++){
			printf("||||||||||");
			Sleep(100);//100ms
			system("cls");
			for (j = 0; j <= i; j++){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}
#endif
#if 1
HANDLE	handle;
COORD pos = { 0, 0 };
int main(){
	int i,  j;
	while (1){
		for (i = 0; i < 10; i++){
			printf("||||||||||");
			Sleep(100);//100ms
			printf("\b\b\b\b\b\b\b\b\b\b");//������������
			printf("          ");
			printf("\n");
		}
		handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(handle, pos);
	}

	system("pause");
	return 0;
}
#endif
