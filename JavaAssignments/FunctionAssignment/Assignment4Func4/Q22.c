#include<stdio.h>

int prime_range(int start, int end) {
    int primeCount = 0;

    for (int num = start; num <= end; num++) {
        int i = 2;
        int flag = 0;
        while (i <= num / 2) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0 && num > 1) {
            printf("%d is a prime number\n", num);
            primeCount++;
        }
    }
    return primeCount;
}

int main() {
    int start, end;
    printf("Enter the Starting and Ending Number: ");
    scanf("%d %d", &start, &end);

    int count = prime_range(start, end);
    
    printf("Total prime numbers found: %d\n", count);
    
   
}
