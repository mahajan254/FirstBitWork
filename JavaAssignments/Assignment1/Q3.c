// 3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number

#include<stdio.h>
int main(){
    int num,reverse=0,digit,sum=0;

    printf("Enter the digit:");
    scanf("%d:",&num);

    while(num!=0){
        digit = num%10;
        sum = sum +digit;
        reverse = reverse * 10 + digit;
        num=num/10;
    }

    printf("Addition of 3 digit:%d\n",sum);
    printf("reverse the digit is %d",reverse);
}