#include <stdio.h>
#include <stdlib.h>
void mew_line(){
	printf("hehe\n");
}

void three_line(){
	int i = 0;
	for (i = 0; i < 3; i++){
		mew_line();
	}
}

int main(){
	three_line();
	system("pause");
	return 0;
	
}
