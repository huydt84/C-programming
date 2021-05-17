# include <stdio.h>

int main() {
	float sum = 0;
	float dem = 0;
	int c;
	float ave;
	scanf("%d", &c);
	while(c >= 0) {
		sum += c;
		dem++;
		scanf("%d", &c);
	}
	ave = sum / dem;
	printf("Gia tri trung binh la: %f", ave);
	return 0;
}
