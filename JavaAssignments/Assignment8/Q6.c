#include <stdio.h>

void prime_numbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int isPrime = 1;

        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime && num > 1) {
            printf("%d\n", num);
        }
    }
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Prime numbers are:\n");
    prime_numbers(arr, n);

    return 0;
}
