//Find minimum and maximum number in array.
#include<stdio.h>

int main(){
    
    int a[5];
    
    printf("Enter the elements in an array");
    int min=a[0];
    
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
      if(a[i]< min)
        min= a[i];
    }
    printf("minimum is = %d", min);

    int max = a[0];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
      if(a[i]>max)
        max=a[i];
    }
    printf("maximum is = %d", max);

    
}