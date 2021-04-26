#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com, guess, range;
    printf("You want the number to be smaller than: ");
    scanf("%d", &range);
    srand(time(NULL));
    com = 1 + rand() % range;
    printf("Guess my number: ");
    scanf("%d", &guess);
    if (guess < com)
    	printf("Your guess was too small.\n");
    else if (guess > com)
        printf("Your guess was too high.\n");
    else
        printf("Wow, your guess was right!\n");
    printf("The correct number was %d.\n", com);
    return 0;
}
