# include <stdio.h>

int allOdd(int n) {
	int i;
	while (n > 0) {
		i = n % 10;
		if (i%2==0) return 0;
		n = n / 10;
	}
	return 1;
}

int allEven(int n) {
	int i;
	while (n > 0) {
		i = n % 10;
		if (i%2==1) return 0;
		n = n / 10;
	}
	return 1;
}

void main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (allOdd(n) == 1) {
		printf("%d gom toan cac chu so le", n);
	}
	else if (allEven(n) == 1) {
		printf("%d gom toan cac chu so chan", n);
	}
	else {
		printf("Cac chu so cua %d khong hoan toan chan, cung khong hoan toan le", n);
	}	
}
