# include <stdio.h>

int salary(int n) {
	if (n <= 40) return 15000 * n;
	else return 15000 * n + 7500 * (n - 40);	
}

void main() {
	int n;
	printf("Nhap so gio lam: ");
	scanf("%d", &n);
	if (n < 10 || n > 65) {
		printf("Khong hop le!");
	}
	else {
		printf("Luong: %d", salary(n));
	}
}
