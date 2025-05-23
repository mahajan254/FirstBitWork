#include <stdio.h>
void sum_digits(){
    int num, first_digit, last_digit;

   
    printf("Enter the number: ");
    scanf("%d", &num);

   
    last_digit = num % 10;

    
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    
    int sum = first_digit + last_digit;

    
    printf("Sum of first and last digit of %d is: %d\n", num, sum);
}
int main() {
    sum_digits();

   
}
