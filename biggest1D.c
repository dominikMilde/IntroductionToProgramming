#include <stdio.h>

int najveciClan1D(int *p, int n) {
	int najveci, i;
	for (i = 0; i < n; ++i)
		if (i == 0 || *(p + i) > najveci)
	najveci = *(p + i);
	return najveci;
}
int main(void){
	
	int lista[3][4] =  {{2,1,5,6},
						{55,6,2,0},
						{1,2,3,4}}
						
	int *p = lista[0];
	return 0;
}