#include<stdio.h>

void reverseArray(int a[], int size) {
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Reversed array: ");
    reverseArray(a, size);

    return 0;
}
