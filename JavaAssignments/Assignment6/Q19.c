//reverrse the number

#include<stdio.h>

void reverse(int num){
    int digit;
   int rev=0;

    

    int temp = num;
    while(num!=0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num/10;
    }
    if(rev==temp){
        printf("%d is a palindrome number.\n",temp);
    }else{
        printf("%d is not a palindrome number.\n",temp);
    }
}
int main(){
    int num;
    
    printf("Enter the number:");
    scanf("%d",&num);

    reverse(num);
   
}