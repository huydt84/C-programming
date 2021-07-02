#include <stdio.h>

void main() {
    int choice1, choice2;
    printf("Choose a season:\n");
    printf("1. Spring\n");
    printf("2. Summer\n");
    printf("3. Fall\n");
    printf("4. Winter\n");
    printf("Enter your number: ");
    scanf("%d", &choice1);

    if (choice1 == 2) {
        printf("1. Go swimming\n");
        printf("2. Other activities\n");
    	printf("Choose:");
        scanf("%d", &choice2);
        if (choice2 == 1)
            printf("Bikini");
        else
            printf("No suggestions");
    }

    else if (choice1 == 4) {
        printf("1. Go skiing\n");
        printf("2. Go to bed\n");
        printf("Choose:");
        scanf("%d", &choice2);
        if (choice2 == 1)
            printf("Coat, Boots and warm clothes");
        else
            printf("No suggestions");
    }
    
    else {
    	printf("\nEverything is good");
	}
}
