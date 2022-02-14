#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define BROJ_MAX 100000000
int main(void){
	FILE *binarna = fopen("tocke.bin", "rb");
	struct tocka_s {
		double x;
		double y;
	}tocka;
	
	struct tocka_s lista[100000];
	for(int i=0; i<1000; i++){
		float xKor = 0.f;
		float yKor = 0.f;
		fread(lista, sizeof(tocka), 100000, binarna);
		for(int j=0; j<100000; j++){
			xKor += lista[j].x;
			yKor += lista[j].y;
		}
		
		printf("%d. grupa: %.2f %.2f\n", i+1, xKor/100000.f, yKor/100000.f);
	}
	fclose(binarna);
	return 0;
}