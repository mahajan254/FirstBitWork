// 3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number

#include<stdio.h>


void sum_reverse(int *num){

    int reverse =0;
    int digit,sum=0;
    while(*num!=0){
        digit = *num%10;
        sum = sum +digit;
        reverse = reverse * 10 + digit;
        *num=*num/10;
    }

    printf("Addition of 3 digit:%d\n",sum);
    printf("reverse the digit is %d",reverse);
}
int main(){
    int num;

    printf("Enter the digit:");
    scanf("%d:",&num);
  
    sum_reverse(&num);
   
}