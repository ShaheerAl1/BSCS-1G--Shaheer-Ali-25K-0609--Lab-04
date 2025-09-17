//Task 09
#include <stdio.h>

int main() {
    int option;
    float total = 10;

    printf("Choose option: \n1 = Pickup  \n2 = Delivery\n");
    scanf("%d", &option);

    if (option == 2) {
        total += 3;
        printf("You chose Delivery, Hence $3 added.\n");
        printf("Your total is: $%.2f\n", total);
    } else if (option == 1) {
        printf("Pickup chosen.\n");
        printf("Your total is: $%.2f\n", total);
    } else {
        printf("Invalid option.\n");
    }
        return 0;
}
