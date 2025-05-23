#include<stdio.h>

void check_even_odd(int a[], int size) {
    for(int i = 0; i < size; i++) {
        if(a[i] % 2 == 0) {
            printf("even: %d\n", a[i]);
        } else {
            printf("odd: %d\n", a[i]);
        }
    }
}

int main() {
    int a[10];

    printf("Enter the elements in an array: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    check_even_odd(a, 10);

   
}
