#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
 
 int a, b, c;
 a = 0; b = 0; c = 0;
 srand((unsigned int) time(NULL));
 for (int i =0; i<1000; i++){
	 int broj = rand() % (127-32) + 32;
	 if(isalpha(broj)){
		 a++;
	 }
	 else if(isdigit(broj)){
		 b++;
	 }
	 else{
		 c++;
	 }
	 
 }
 printf("%d, %d, %d", a, b, c);
 return 0;
}