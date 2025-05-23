#include<stdio.h>

int fibonacci(int num) {
    int first = 0;
    int second = 1;
    int temp;

    for (int i = 0; i < num; i++) {
        printf("%d ", first);
        temp = first + second;
        first = second;
        second = temp;
    }
    printf("\n");

    return first;  // Return the last Fibonacci number generated
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    int res = fibonacci(num);
    printf("The last Fibonacci number is: %d\n", res);

   
}
