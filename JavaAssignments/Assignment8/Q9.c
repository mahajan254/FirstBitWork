#include<stdio.h>

void sortingArray(int a[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) { 
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void inputArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of an array: ");
    scanf("%d", &size);
    int a[size];

    printf("Enter the elements in the array:\n");
    inputArray(a, size);

    sortingArray(a, size);

    printf("Sorted Array: ");
    printArray(a, size);

    
