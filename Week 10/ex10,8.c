#include <stdio.h>

void reverse_array(int a[], int n)
{
  	int c, t;
  	for (c = 0; c < n/2; c++) {
    	t = a[c];                  
    	a[c] = a[n-c-1];
    	a[n-c-1] = t;
  	}
}

void main()
{
	int n, c, a[100];
	printf("Nhap so phan tu cua mang: ");
  	scanf("%d", &n);
	printf("Nhap cac phan tu cua mang:\n");
  	for (c = 0; c < n; c++)
    	scanf("%d", &a[c]);
  	reverse_array(a, n);
  	printf("Mang dao nguoc:\n");
  	for (c = 0 ;c < n; c++)
    	printf("%d\n", a[c]);
}


