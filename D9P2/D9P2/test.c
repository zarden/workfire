#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int reverse_bit(unsigned int value){
	int i = 0;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++){
		ret += ((value >> i) & 1)*pow(2, 31 - i);
	}
	return ret;
}

int main(){
	unsigned int ret = 0;
	int n = 0;
	n = 25;
	ret = reverse_bit(n);
	printf("%u\n", ret);
	system("pause");
	return 0;
}