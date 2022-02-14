#include <stdio.h>
#define MAX 20


void zamijeni(float *first, float *second){
	float temp;
	temp = *first;
	*first = *second;
	*second = temp;
	
	
}
void poredaj (float *p1, float *p2, float *p3){
	if(*p1>*p2){
		zamijeni(p1, p2);
	}
	if(*p2>*p3){
		zamijeni(p2, p3);
	}
	if(*p1>*p3){
		zamijeni(p1, p3);
	}
}

int main(void){
	float prvi, drugi, treci;
	scanf("%f %f %f", &prvi, &drugi, &treci);
	poredaj(&prvi, &drugi, &treci);
	
	printf("%f %f %f", prvi, drugi, treci);
	
}