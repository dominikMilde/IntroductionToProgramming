#include <stdio.h>

int main(void) {
	int m = 7, *p1 = &m;
	double x = 3.1415926, *p2 = &x;
	printf("%u %u %u\n", sizeof(p1), sizeof(m), sizeof(*p1));
	printf("%u %u %u", sizeof(p2), sizeof(x), sizeof(*p2));
}