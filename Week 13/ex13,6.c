# include <stdio.h>
# include <string.h>

void main() {
	int i;
    char products[5][50] = {
        "TV127  31 inch Television",
        "CD057  CD Player",
        "TA877  Answering Machine",
        "CS409  Car Stereo",
        "PC655  Personal Computer"
    };
    char find[50];
    gets(find);
    for (i = 0; i < 5; i++) {
        if (strstr(products[i], find) != NULL) printf("%s\n", products[i]);
    }
}
