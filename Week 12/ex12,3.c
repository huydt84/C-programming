#include <stdio.h>

void get_sale(int *a, int n) {
	int i;
	printf("Nhap gia cua cac san pham:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int total_sale(int *a, int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

void main() {
    int n;
    int a[100];
    printf("Nhap so san pham: ");
    scanf("%d", &n);
    get_sale(a, n);
    printf("Tong gia cua cac san pham: %d", total_sale(a, n));
}

