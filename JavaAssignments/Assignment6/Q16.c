#include<stdio.h>

void perfect(int *num){
    int sum =0;
   

    
     for(int i=1;i< *num;i++){
       if(*num % i==0){
          sum = sum + i;
       }
       
    }
    if (sum == *num) {
       printf("%d is a perfect number.\n", *num);
   }else{
       printf("%d is not a perfect number.\n", *num);
   }
}
int main(){
     int num;
     printf("Enter the number:");
     scanf("%d",&num);
    perfect(&num);
}
