#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define isBigLetter(ch) (ch >='A' &&  ch<='Z')//�ú궨�� ���ʹ��1����,2�滻.
int isSmallLetter(char ch){
	return ch <= 'z' && ch >= 'a'; //�����ں���,�����Ǻ���
}
int main(){
	char ch;
	//ch = getchar();
	while (1){
		ch = getchar();//������д��ѭ������
		if (ch == '@'){
			break;
		}
		else if (isBigLetter(ch)){
			putchar(ch+32);
		}
		else if (isSmallLetter(ch)){
			putchar(ch - 32);
		}
		else if (isalnum(ch)){
			//do nothing
		}
		else{
			putchar(ch);
		}
	}
	
	system("pause");
	return 0;
}
