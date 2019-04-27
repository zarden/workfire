#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define isBigLetter(ch) (ch >='A' &&  ch<='Z')//用宏定义 宏的使用1查找,2替换.
int isSmallLetter(char ch){
	return ch <= 'z' && ch >= 'a'; //类似于函数,但不是函数
}
int main(){
	char ch;
	//ch = getchar();
	while (1){
		ch = getchar();//这句必须写在循环里面
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
