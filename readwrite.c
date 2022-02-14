#include<stdio.h>

int main(void){
	FILE *ulaz, *bin1, *bin2;
	ulaz = fopen("predmeti.txt", "r");
	bin1 = fopen("predmeti1.bin", "wb");
	bin2 = fopen("predmeti2.bin", "wb");
	
	struct zapis_s{
		int sifra;
		char naziv[40+1];
		int brPolozeni;
	} zapis;
	zapis.brPolozeni = 0;
	
	while(fscanf(ulaz, "%d %[^\n]", &zapis.sifra, zapis.naziv) == 2){
		fwrite(&zapis, sizeof(zapis), 1, bin1);
		fseek(bin2, (long)(sizeof(zapis))*(zapis.sifra-1001), SEEK_SET);
		fwrite(&zapis, sizeof(zapis), 1, bin2);
	}
	fclose(ulaz);
	fclose(bin1);
	fclose(bin2);
	return 0;
}