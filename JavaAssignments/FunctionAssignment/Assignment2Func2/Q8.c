#include <stdio.h>
int sum_digits(){
    int num, first_digit, last_digit;

   
    printf("Enter the number: ");
    scanf("%d", &num);

   
    last_digit = num % 10;

    
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    
    int sum = first_digit + last_digit;

    
   return sum;
}

int main() {
    int res = sum_digits();
    printf("the sum of first and last digits are %d:",res);

   
}
