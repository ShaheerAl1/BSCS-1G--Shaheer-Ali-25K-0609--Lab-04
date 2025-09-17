//Task 03
#include <stdio.h>

int main() {
    int num_pizza;
    int total = 0;

    printf("Enter number of pizzas (1, 2, or 3): ");
    scanf("%d", &num_pizza);

    if (num_pizza == 1) {
        total = 8;
    } else if (num_pizza == 2) {
        total = 15;
    } else if (num_pizza == 3) {
        total = 21;
    } else {
        printf("Invalid choice.\n");
    }    
        printf("You ordered %d pizza. Total cost: $%d\n", num_pizza, total);
    
        return 0;
}
