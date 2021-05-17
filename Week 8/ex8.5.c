# include <stdio.h>

int main() {
	int num;
	printf("Enter the number of students: ");
	scanf("%d", &num);
	int result, pass, fail;
	pass = 0;
	fail = 0;
	printf("Enter result:\n");
	while(num > 0) {
		scanf("%d", &result);
		if (result == 1) {
			pass++;
		}
		else if (result == 0) {
			fail++;
		}
		else {
			continue;
		}
		num--;
	}
	printf("Passed students: %d\n", pass);
	printf("Failed students: %d", fail);
	return 0;
}
