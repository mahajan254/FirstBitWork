// Accept the price from user. Ask the user if he is a student (user may say yes or 
// no). If he is a student and he has purchased more than 500 than discount is 20% 
// otherwise discount is 10%. But if he is not a student then if he has purchased 
// more than 600 discount is 15% otherwise there is not discount.

#include <stdio.h>

float calculate_final_price() {
    float price, discount = 0;
    char student;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

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
    float finalPrice = calculate_final_price();

    if (finalPrice != -1) {
        printf("Final price: %.2f\n", finalPrice);
    }

    return 0;
}
