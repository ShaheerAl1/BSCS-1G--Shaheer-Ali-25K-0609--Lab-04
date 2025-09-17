//Task 04
#include <stdio.h>

int main() {
    int crust, total = 8; 

    printf("Choose crust type:\n1 = Regular ($0)\n2 = Thin ($1)\n3 = Stuffed ($2)\n");
    scanf("%d", &crust);

    if (crust == 1) {
        total += 0;
    } else if (crust == 2) {
        total += 1;
    } else if (crust == 3) {
        total += 2;
    } else {
        printf("Invalid crust.\n");
    }    
        printf("Your total cost with crust is $%d.\n", total);

        return 0;
}
