#include <stdio.h>

void sub_array(int *a, int n) {
	int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            for (k = 0; k <= j; k++) {
                printf("%d ", a[i + k]);
            }
            printf("\n");
        }
    }
}

void main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) {
    	printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac mang con:\n");
    sub_array(a, n);
}


