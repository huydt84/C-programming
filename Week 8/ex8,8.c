# include <stdio.h>

int main() {
	int n;
	unsigned long long factorial;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n > 0) {
		factorial *= n;
		n--;
	}
	printf("Giai thua cua n: %llu", factorial);
	return 0;
}
