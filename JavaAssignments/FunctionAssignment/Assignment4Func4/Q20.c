#include <stdio.h>

int addidgits(int num) {
    int first_digit, last_digit;

   last_digit = num % 10;

    
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    
    int sum = first_digit + last_digit;

    
   return sum;

   
}
int main(){
    int num;

   
    printf("Enter the number: ");
    scanf("%d", &num);
 
    addidgits(num);
    printf("Sum of first and last digit of %d is: %d\n", num, addidgits(num));
    
}
