#include <stdio.h>
#include <string.h>

void replace(char *s, char c1, char c2) {
	int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == c1) s[i] = c2;
    }
}

void main() {
    char s[100], c1, c2;
    scanf("%s %c %c", s, &c1, &c2);
    replace(s, c1, c2);
    printf("Chuoi moi: %s", s);
}


