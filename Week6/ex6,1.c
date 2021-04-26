# include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	scanf("%s", a);
	int n = strlen(a);
	char max = a[0];
	int i;
	for(i = 0; i < n; i++) {
		if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) 	
			if(max > a[i]) 
				max = a[i];
	}
	printf("Ki tu can tim: %c\n", max);
	return 0;
}
