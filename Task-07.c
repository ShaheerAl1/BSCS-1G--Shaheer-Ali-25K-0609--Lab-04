//Task 07
#include <stdio.h>

int main() {
    char student;
    float total = 8;

    printf("Do you have a student ID? (Y/N): ");
    scanf(" %c", &student);

    if (student == 'Y') {
        total -= 2;
        printf("Your total after discount is: $%.2f\n", total);
    } else {
        printf("Your total is: $%.2f\n", total);
    }
        return 0;
}
