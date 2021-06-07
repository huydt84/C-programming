#include <stdio.h>

void main() {
	int a[7]= {13, -355, 235, 47, 67, 943, 1222};
	int i;
	for (i=0; i<5; i++) {
		printf("a[%d]=%d co dia chi la %X\n", i, a[i], &a[i]);
	}
}
