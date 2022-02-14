#include <stdio.h>
	int main(void) {
	char n, m;
	 
	printf("Upisite hex cijeli broj > ");
	scanf("%c%c", &n, &m);
	for(char start=n; start<=m; start++){
		printf("%c", start);
	}
	 return 0;
}