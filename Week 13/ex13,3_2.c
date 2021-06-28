#include <stdio.h>

void copy(char *s2, char *s1) {
	int i = 0;
	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;
	}
}

void main() {
    char s1[100], s2[100];
    gets(s1);
    copy(s2, s1);
    printf("%s\n", s2);
}


