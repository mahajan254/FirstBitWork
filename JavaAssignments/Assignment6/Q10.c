#include <stdio.h>

void student(float price, char student) {
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
        return;  
    }

    float finalPrice = price - discount;
    printf("Final price: %.2f\n", finalPrice);  
}

int main() {
    float price;
    char studentInput;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &studentInput);  

    student(price, studentInput);

    return 0;
}
