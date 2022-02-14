#include<stdio.h>

int main(void){
	FILE *bin2;
	bin2 = fopen("predmeti2.bin", "rb");
	
	struct zapis_s{
		int sifra;
		char naziv[40+1];
		int brPolozeni;
	} zapis;
	
	while(fread(&zapis, sizeof(zapis), 1, bin2)==1){
		if(zapis.sifra != 0){
			printf("%d, %s, polozilo %d\n", zapis.sifra, zapis.naziv, zapis.brPolozeni);
		}
	}

		
	fclose(bin2);
	return 0;
}