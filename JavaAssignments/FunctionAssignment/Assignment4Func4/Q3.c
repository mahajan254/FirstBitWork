// 3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number

#include<stdio.h>


int reverse(int num){

    int reverse =0;
    int digit,sum=0;
    while(num!=0){
        digit = num%10;
        sum = sum+digit;
        reverse = reverse * 10 + digit;
        num=num/10;
    }

   return reverse;
}
int sum(int num){
    int reverse =0;
    int digit,sum=0;
    while(num!=0){
        digit = num%10;
        sum = sum+digit;
        reverse = reverse * 10 + digit;
        num=num/10;
    }

    return sum;
    
}
int main(){
    int num;

    printf("Enter the digit:");
    scanf("%d:",&num);
   
    sum(num);
    printf("Addition of 3 digit:%d\n",sum(num));
    reverse(num);
    printf("reverse the digit is %d",reverse(num));
   
}