#include<stdio.h>
#include<stdlib.h>
void print(int n){
	if (n > 9){
		print(n /10);
	}
	printf("%d", n % 10);
}
int main1(){
	int num = 1234;
	print(num);
	system("pause");
	return 0;
}