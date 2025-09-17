//Task 08
#include <stdio.h>

int main() {
    int pizza, crust;

    printf("Enter number of pizzas: ");
    scanf("%d", &pizza);

    printf("Choose crust \n1 = Regular \n2 = Thin \n3 = Stuffed\n");
    scanf("%d", &crust);

    if (pizza == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("No free garlic bread for you.\n");
    }

    return 0;
}
