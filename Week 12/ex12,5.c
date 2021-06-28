#include <stdio.h>

void reverseIndex(int *a, int n) {
    int tmp, i;
    for (i = 0; i < n / 2; i++) {
        tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
}

void reversePointer(int *a, int n) {
    int tmp, i;
    for (i = 0; i < n / 2; i++) {
        tmp = *(a + i);
        *(a + i) = *(a + n - 1 - i);
        *(a + n - 1 - i) = tmp;
    }
}

void main()
{
    int n, i, k;
    int a[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Nhan 1 neu muon dao nguoc day bang index, con lai se dung pointer: ");
    scanf("%d", &k);
	if (k==1) reverseIndex(a, n);
	else reversePointer(a, n);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}


