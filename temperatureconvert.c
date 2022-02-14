#include <stdio.h>
int main(void){
	int unos;
	float cel, fer;
	
	printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.\n");
	printf("Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj >\n");
	scanf("%d", &unos);
	
	if(unos == 1){
		printf("Unesite temperaturu u stupnjevima Fahrenheit > ");
		scanf("%f", &fer);
		printf("%f stupnja F je %f stupnja C \n", fer, (fer-32)*5/9);
	}
	else{
		printf("Unesite temperaturu u stupnjevima Celsius > ");
		scanf("%f", &cel);
		printf("%f stupnja C je %f stupnja F \n", cel, (cel*9/5 +32));
	}
	return 0;
}
