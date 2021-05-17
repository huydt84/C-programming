# include <stdio.h>

int main() {
	float day, hour;
	float lateHour, otHour, salary;
	printf("So ngay lam: ");
	scanf("%f", &day);
	printf("So gio lam: ");
	scanf("%f", &hour);
	printf("Tong thoi gian muon theo gio: ");
	scanf("%f", &lateHour);
	if (day*8 > hour) {
		salary = hour*100000 - lateHour*120000;
		printf("Tong luong: %f", salary);
	}
	else {
		otHour = hour - day*8;
		salary = day*8*100000 + otHour*150000 - lateHour*120000;
		printf("Tong luong: %f", salary);
	}
	return 0;
}
