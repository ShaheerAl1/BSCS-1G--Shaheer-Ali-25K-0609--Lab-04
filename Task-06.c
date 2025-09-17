//Task 06
#include <stdio.h>

int main() {
    int hour;
    float total = 8;

    printf("Enter current time (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour < 14) {
        total -= total * 0.10;
        printf("10%% discount is applied!\n");
        printf("Your total after discount is: $%.2f\n", total);

    } else{
        printf("Your total is: $%.2f\n", total);

    }
        return 0;
}
