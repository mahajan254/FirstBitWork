#include <stdio.h>

float student(float price, char student) {
    float discount = 0;

    if (student == 'y' || student == 'Y') {
        if (price > 500) {
            discount = price * 0.2;
        } else {
            discount = price * 0.1;
        }
    } else if (student == 'n' || student == 'N') {
        if (price > 600) {
            discount = price * 0.15;
        }
    } else {
        printf("Invalid input\n");
        return -1;  
    }

    float finalPrice = price - discount;
    return finalPrice;
}

int main() {
    float price;
    char studentInput;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &studentInput);

    float finalPrice = student(price, studentInput);

    if (finalPrice != -1) {  
        printf("Final price: %.2f\n", finalPrice);
    }

    
}
