# include <stdio.h>

void main() {
	int n, i;
	int sum = 0;
	int arr[n];
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	printf("Nhap cac phan tu cua mang:\n");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i=1; i<n-1; i++) {
		if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
			sum += arr[i];
		}
	}
	printf("Tong cac phan tu thoa man de bai: %d", sum);
}
