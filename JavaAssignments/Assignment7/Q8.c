#include<stdio.h>
int main(){
    int size1;
    int size2;
    
    printf("enter the size of arr1");
    scanf("%d",&size1);

    printf("enter the size of arr2");
    scanf("%d",&size2);

    int a[size1],b[size2];
    int c[size1 + size2];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
    }

    int i;

    for(i=0;i<size1;i++){
        c[i]=a[i];
    }
    for(int j=0;j<size2;j++,i++){
        c[i]=b[j];
        
    }
    //i++ is used to third array traversal to store seccond array  after inserting  1st array element

    printf("Merged array: ");

    for(int i=0;i<size1 + size2;i++){
        printf("%d ", c[i]);
    }

    printf("\n");

}