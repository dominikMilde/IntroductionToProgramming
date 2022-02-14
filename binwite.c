#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	FILE *ulaz, *izlaz;
	izlaz = fopen("binarna.bin", "wb");
	
	struct tocka_s{
		double x_kor;
		double y_kor;
	} tocka;
	
	srand((unsigned)time(NULL));
	
	for(int i=0; i<100000000; i++){
		tocka.x_kor = (rand()%100 + 1);
		tocka.y_kor = (rand()%100 + 1);
		fwrite(&tocka, sizeof(tocka), 1, izlaz);
	}
	return 0;
}