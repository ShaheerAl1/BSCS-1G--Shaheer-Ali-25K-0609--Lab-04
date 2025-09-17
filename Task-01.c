// Task 01
#include <stdio.h>

int main() {
    int size;

    printf("Choose pizza size: \n1 = Small \n2 = Medium \n3 = Large\n");
    scanf("%d", &size);

    if (size == 1) {
        printf("You chose Small pizza size.\n");
    } else if (size == 2) {
        printf("You chose Medium pizza size.\n");
    } else if (size == 3) {
        printf("You chose Large pizza size.\n");
    } else {
        printf("Invalid size.\n");
    }   
        
        return 0;
}
