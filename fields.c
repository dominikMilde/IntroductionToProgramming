#include <stdio.h>
int main(void) {
	struct bodovi_s {
		int mbr;
		int mi;
		int zi;
		int ukupno;
		};
	struct bodovi_s ucenici[3];
	for(int i = 0; i < 3; i++){
		scanf("%d %d %d", &ucenici[i].mbr, &ucenici[i].mi, &ucenici[i].zi);
		ucenici[i].ukupno = ucenici[i].mi + ucenici[i].zi;
	}
	
	struct bodovi_s pomocna[3];
	pomocna = ucenici;
	
	return 0;
}