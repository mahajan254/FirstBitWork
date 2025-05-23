#include<stdio.h>

int find_target(int a[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(a[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[5];
    int target;

    printf("Enter the target element: ");
    scanf("%d", &target);

    printf("Enter the elements in an array: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int index = find_target(a, 5, target);

    if(index != -1) {
        printf("Element found: %d at index: %d\n", a[index], index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
