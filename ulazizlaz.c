#include <stdio.h>
#include <string.h>
int main(void){
	FILE *ulaz, *izlaz;
	ulaz = fopen("ulaz.txt", "r");
	izlaz = fopen("izlaz.txt", "w");
	
	int broj;
	char prezime[15+1];
	while(fscanf(ulaz, "%d %[^\n]", &broj, prezime) == 2){
		if(strchr(prezime, 'r') != NULL){
			fprintf(izlaz, "%d %s", broj, prezime);
		}
	}
	fclose(ulaz);
	fclose(izlaz);
	return 0;
}