//Task 05
#include <stdio.h>

int main() {
    char cheese;
    float total = 8; 

    printf("Do you want extra cheese? (Y/N): ");
    scanf(" %c", &cheese);  

    if (cheese == 'Y') {
        total += 1.50;
    } else {
        printf("Declined\n");
    }    
        printf("Your total is: $%.2f\n", total);
        
        return 0;
}
