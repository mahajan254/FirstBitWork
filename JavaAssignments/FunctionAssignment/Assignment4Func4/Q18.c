//Check number is strong or not.


#include<stdio.h>

int strong_num(int num){
    int temp = num;
    int sum =0;
    
    int digit=0;
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
       return 0;}
}
int main(){
    int num;
    
    printf("enter the number:");
    scanf("%d",&num);

    if(strong_num(num)){
        printf("%d is a strong number.\n", num);
    }else{
        printf("%d is not a strong number.\n", num);
    }

   
}