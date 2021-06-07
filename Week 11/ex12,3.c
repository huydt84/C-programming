# include <stdio.h>

void main() {
	int i;
	float a[3];
	float *p;
	p = &a[0];
	for (i=0; i<3; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%f", &a[i]);
	}
	printf("Cac gia tri moi:\n");
	for (i=0; i<3; i++) {
		printf("\na[%d] = %f", i, *(p+i)+=100);
	}
}
