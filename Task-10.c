//Task 10
#include <stdio.h>

int main() {
    int size, num, crust, hour, option;
    char cheese, student;
    float total = 0, basePrice = 0, crustCost = 0, cheeseCost = 0, discountTime = 0, discountStudent = 0, deliveryCharge = 0;

    //Size
    printf("Choose pizza size: \n1 = Small($8) \n2 = Medium($10) \n3 = Large($12)\n");
    scanf("%d", &size);

    if (size == 1) basePrice = 8;
    else if (size == 2) basePrice = 10;
    else if (size == 3) basePrice = 12;
    else {
        printf("Invalid size.\n");
        return 0;
    }
    total = basePrice;

    //Quantity
    printf("\nHow many pizzas do you want? ");
    scanf("%d", &num);
    total *= num;

    //Crust
    printf("\nChoose crust type:\n1 = Regular ($0)\n2 = Thin ($1)\n3 = Stuffed ($2)\n");
    scanf("%d", &crust);
    if (crust == 2) {
        crustCost = num * 1;
        total += crustCost;
    } else if (crust == 3) {
        crustCost = num * 2;
        total += crustCost;
    }

    //Extra cheese
    printf("\nDo you want Extra cheese? (Y/N): ");
    scanf(" %c", &cheese);
    if (cheese == 'Y') {
        cheeseCost = num * 1.50;
        total += cheeseCost;
    }

    //Time discount
    printf("\nEnter current time (0-23): ");
    scanf("%d", &hour);
    if (hour >= 11 && hour < 14) {
        discountTime = total * 0.10;
        total -= discountTime;
    }

    //Student discount
    printf("\nStudent ID? (Y/N): ");
    scanf(" %c", &student);
    if (student == 'Y') {
        discountStudent = 2;
        total -= discountStudent;
    }

    //Free garlic bread 
    if (num == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    }

    //Delivery or Pickup
    printf("\nChoose option: \n1 = Pickup  \n2 = Delivery\n");
    scanf("%d", &option);
    if (option == 2) {
        deliveryCharge = 3;
        total += deliveryCharge;
    }

    //Final Output
    if (total < 0) {
        total = 0;
    }

    //Final Receipt
    printf("\nRECEIPT\n");
    printf("Pizza Size      : %s\n", (size == 1 ? "Small" : size == 2 ? "Medium" : "Large"));
    printf("Quantity        : %d\n", num);
    printf("Crust Type      : %s\n", (crust == 1 ? "Regular" : crust == 2 ? "Thin (+$1 each)" : "Stuffed (+$2 each)"));
    printf("Extra Cheese    : %s\n", (cheese == 'Y') ? "Yes (+$1.50 each)" : "No");
    printf("Base Price      : $%.2f\n", basePrice * num);
    printf("Crust Cost      : $%.2f\n", crustCost);
    printf("Cheese Cost     : $%.2f\n", cheeseCost);
    printf("Time Discount   : -$%.2f\n", discountTime);
    printf("Student Discount: -$%.2f\n", discountStudent);
    printf("Delivery Charge : $%.2f\n", deliveryCharge);
    printf("-----------------------------------\n");
    printf("TOTAL           : $%.2f\n", total);


    return 0;
}
