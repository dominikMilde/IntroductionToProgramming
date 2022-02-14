#include<stdio.h>
#include<string.h>
int main(void){
	FILE *ulaz, *izlaz;
	ulaz = fopen("drzave.bin", "rb");
	//izlaz = fopen("drzave.bin", "wb");
	
	struct drzava_s{
		int sifra;
		char oznaka[2+1];
		char naziv[40+1];
	}drzava;
	
	char niz[3];
	int nasao = 0; 
	fgets(niz, 3, stdin);
	while(fread(&drzava, sizeof(drzava),1, ulaz) == 1){
		if(strcmp(niz, drzava.oznaka) == 0)
			break;
		}
	if(strcmp(niz, drzava.oznaka) == 0){
		
	}
	fclose(ulaz);
	return 0;
}