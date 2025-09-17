//Task 02
#include <stdio.h>

int main() {
    int num_pizza;
    int price = 8;

    printf("A small pizza costs $%d.\n", price);
    printf("How many pizzas do you want? ");
    scanf("%d", &num_pizza);

    if (num_pizza == 1) {
        printf("Your total is $%d.\n", price);
    } else if (num_pizza > 1) {
        printf("Check our Multi Pizza deals!\n");
    } else {
        printf("Invalid number of pizzas.\n");
    }
        
        return 0;
}
