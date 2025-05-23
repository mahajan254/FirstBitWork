#include<stdio.h>

void print_alternate_numbers(int a[], int size) {
    for(int i = 0; i < size; i += 2) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[5];
    int n = sizeof(a) / sizeof(a[0]);

    printf("Enter the elements in an array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Alternate numbers are: ");
    print_alternate_numbers(a, n);

    
}
