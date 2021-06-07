# include <stdio.h>

void main() {
	int i;
	int a[3];
	int *p;
	for (i=0; i<3; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	p = &a[0];
	for (i=0; i<3; i++) {
		printf("\nDia chi %p chua gia tri %d", p+i, *(p+i));
	}
}
