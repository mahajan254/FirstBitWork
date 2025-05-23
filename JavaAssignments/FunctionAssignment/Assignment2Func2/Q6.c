//Check number is strong or not.


#include<stdio.h>
int strong_num(){
    int num;
    
    int sum =0;
       
       int digit=0;
       printf("enter the number:");
       scanf("%d",&num);
   
       int temp = num;
       while(num!=0)
       {
           digit = num % 10;
           int factorial = 1;
           int i=1;
           while(i<=digit)
          {
            factorial = factorial * i;
             i++;
          }
           sum = sum + factorial;
           num = num/10;
   
       }
       if (sum == temp) {
           return 1;
       } else {
          return 0;
       }
}
int main(){
   int res = strong_num();
   if(res==1){
    printf(" given no is a strong number");
   }else{
    printf(" given no is not a strong number");
   }
}