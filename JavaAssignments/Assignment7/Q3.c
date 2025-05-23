#include<stdio.h>  

int main() {
    int a[10];    
    int sum = 0;    

    printf("Enter the elements in an array:\n");    

    
    for (int i = 0; i < 6; i++) {     
        scanf("%d", &a[i]);     
        sum += a[i];  
    }

   
    printf("The total sum of the array is: %d\n", sum);  

    return 0;    
}
