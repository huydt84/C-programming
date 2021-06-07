# include <stdio.h>

void rotate(int *a, int *b, int *c) {
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void main() {
	int a[3];
	int i;
	printf("Nhap 3 so:\n");
	for (i=0; i<3; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	rotate(&a[0], &a[1], &a[2]);
	printf("\nSau khi thay doi thu tu:\n");
	for (i=0; i<3; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}
