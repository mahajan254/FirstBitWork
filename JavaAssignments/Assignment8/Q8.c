#include<stdio.h>

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void mergeArrays(int a[], int b[], int c[], int size1, int size2) {
    int i = 0;
    for (i = 0; i < size1; i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < size2; j++, i++) {
        c[i] = b[j];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int a[size1], b[size2], c[size1 + size2];

    printf("Enter elements for the first array:\n");
    inputArray(a, size1);

    printf("Enter elements for the second array:\n");
    inputArray(b, size2);

    mergeArrays(a, b, c, size1, size2);

    printf("Merged array: ");
    printArray(c, size1 + size2);

    return 0;
}
