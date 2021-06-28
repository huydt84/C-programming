#include <stdio.h>

double *maximum(double *a, int n) {
    double *max = NULL;
    int i;
    for (i = 0; i < n; i++) {
        if (max == NULL)
            max = &a[0];
        if (*max < a[i])
            max = &a[i];
    }
    return max;
}

void main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    double a[100];
    for (i = 0; i < n; i++) {
    	printf("Nhap a[%d]: ", i);
        scanf("%lf", &a[i]);
    }
    if (maximum(a, n) != NULL) printf("Max = %lf", *maximum(a, n));
    else printf("Mang khong co phan tu nao!");
}


