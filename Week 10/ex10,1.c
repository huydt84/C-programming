# include <stdio.h>

// Em chi lam program voi 10 phan tu thoi, vi 100 qua nhieu
void main() {
	int i;
	int sumOdd = 0;
	int arr[10];
	printf("Nhap mang 10 phan tu:\n");
	for (i=0; i<10; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for(i=0; i<10; i++) {
		if (arr[i]%2==1) {
			sumOdd += arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("Tong cac phan tu le trong mang: %d\n", sumOdd);
	printf("Gia tri nho nhat cua mang: %d", min);
}
