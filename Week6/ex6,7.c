#include <stdio.h>

int main() {
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    switch (age)
    {
        case 0: case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8: case 9:
        case 10: case 11: case 12: case 13: case 14:
        case 15: case 16: case 17:
            printf("Child");
            break;
        default:
            if (age < 0)
                printf("Error");
            else if (age >= 65)
                printf("Senior citizen");
            else
                printf("Adult");
            break;
    }
    return 0;
}
