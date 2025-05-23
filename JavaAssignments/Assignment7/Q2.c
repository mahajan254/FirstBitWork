#include<stdio.h>

int main(){
    
    int a[5];
    int target;
    printf("Enter the target element");
    scanf("%d",&target);
    printf("Enter the elements in an array");
    
    int flag=0;

    int i=0;
    for( i=0;i<5;i++){
        scanf("%d",&a[i]);
        
      if(a[i]==target)
      {
       //flag = 1;
       printf("element found : %d at index is : %d \n",a[i],i);
       //break;
       return 0;
      }
     
    }
    // if(!flag){
    //    {
    //     printf("element not  found ");
    //   }
    // }
    printf("element not  found ");

    
}