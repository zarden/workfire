#include<stdio.h>
void Swap(int* x, int* y){
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int num1 = 10;
	int num2 = 20;
	Swap(&num1, &num2);
	printf("num1=%d num2=%d", num1, num2);
	system("pause");
}