#include<stdio.h>

void find_min_max(int a[], int size, int* min, int* max) {
    *min = a[0];
    *max = a[0];

    for(int i = 1; i < size; i++) {
        if(a[i] < *min) {
            *min = a[i];
        }
        if(a[i] > *max) {
            *max = a[i];
        }
    }
}

int main() {
    int a[5];
    int min, max;
    
    printf("Enter the elements in an array: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    
    find_min_max(a, 5, &min, &max);

    printf("Minimum is = %d\n", min);
    printf("Maximum is = %d\n", max);

    return 0;
}
