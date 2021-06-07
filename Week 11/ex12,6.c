# include <stdio.h>
# include <math.h>

int incomeplus(int year, int salary) {
	if (year <=3) return salary;
	return salary * pow(2, year-3);
}

void main() {
	int year, salary;
	printf("Nhap so nam lam viec: ");
	scanf("%d", &year);
	printf("Nhap luong hien tai: ");
	scanf("%d", &salary);
	printf("Luong sau %d nam: %d", year, incomeplus(year, salary));
}
