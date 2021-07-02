#include <stdio.h>

void main() {
    int money = 100; 
	int option;
    while (money > 20) {
        printf("You have $%d. CD we have.\n", money);
        printf("1. Despacito	$30\n");
        printf("2. Vietnam National Anthem    $40\n");
        printf("3. Baby Shark	$20\n");
        printf("Buy: ");
        scanf("%d", &option);
        if (option == 1 && money >= 30)
            money -= 30;
        else if (option == 2 && money >= 40)
            money -= 40;
        else if (option == 3 && money >= 20)
            money -= 20;
        else if (option < 1 || option > 3)
            printf("No option for that. Choose again");
        else 
			printf("Not enough  money to buy that!");
        printf("\n");
    }
    if (money > 0) 
    	printf("Now you have only $%d, not enough to buy any CDs", money);
    else
    	printf("No money left!");
}
