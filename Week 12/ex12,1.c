#include <stdio.h>

int demChan(int *a, int n) {
	int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            count++;
    }
    return count;
}

void main() {
    int n, i;
    int a[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("So phan tu chan trong mang: %d", demChan(a, n));
}


