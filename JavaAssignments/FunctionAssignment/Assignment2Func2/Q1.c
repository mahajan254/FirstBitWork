//wap to print even and odd no in given range 
#include<stdio.h>

int evenodd(){
    int num;
   
    printf("enter the number");
    scanf("%d",&num);

   
        if(num%2==0){
           return 1;
        }else{
            return 0;
        }
}
int main(){
   
      evenodd();
      if(1){
        printf("Even");
      }else{
        printf("odd");
      }
    
}