#include<stdio.h>
int main(){
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);

    printf("enter the elements in an array:");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
   printf("\n");

    printf("Alternate numbers are:");
    for(int i=0;i<n;i+=2){
        //scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
}