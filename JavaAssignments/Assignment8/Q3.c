#include<stdio.h>

int calculate_sum(int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int a[10];
    int sum;

    printf("Enter the elements in an array:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    sum = calculate_sum(a, 6);

    printf("The total sum of the array is: %d\n", sum);

    return 0;
}
