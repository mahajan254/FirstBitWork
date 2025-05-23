#include<stdio.h>

void inputArray(int arr[],int size,int number){
    printf("Enter elements for array %d:\n", number);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void printArray(int a[],int size,int number) {
  
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);  
       // printf("%d ", b[i]);  
    }
    printf("\n");
}

int main(){
    int size;

    printf("enter the size of an array:");
    scanf("%d", &size);

    int a[size], b[size],c[size];

    inputArray(a,size,1);
    inputArray(b,size,2);


    for (int i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }
    printf("Elements in first array are : ");
    printArray(a,size,1);

    printf("Elements in second array are: ");
    printArray(b,size, 2);

    printf("Addition of two array: ");
    printArray(c,size,3);
}