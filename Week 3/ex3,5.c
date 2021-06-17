# include <stdio.h>

void main()
{
    char day[10];
    int overnight, three_day, weekly;

    printf("Enter day: ");
    scanf(" %10s", &day);
    printf("Today is %s!", day);
    
    printf("\n\nOvernight = ");
    scanf("%d", &overnight);
    printf("Three-day = ");
    scanf("%d", &three_day);
    printf("Weekly = ");
    scanf("%d", &weekly);
    printf("Your total cost is %d$", overnight * 7 + three_day * 5 + weekly * 3);
}
