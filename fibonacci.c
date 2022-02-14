#include <stdio.h>

int fibonaci(int broj) {
	if(broj == 1 || broj == 2){
		return 1;
	}
	else{
		return (fibonaci(broj-1) +fibonaci(broj-2));
	}
}
int main(void){
	printf("unesit");
	int a;
	scanf("%d", &a);
	printf("%d", fibonaci(a));
	
	return 0;
}