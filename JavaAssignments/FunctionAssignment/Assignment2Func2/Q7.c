//reverrse the number

#include<stdio.h>
int reverse_num(){
    int num;
    int digit;
    int rev=0;

    printf("Enter the number:");
    scanf("%d",&num);

    int temp = num;
    while(num!=0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num/10;
    }
    if(rev==temp){
       return 1;;
    }else{
       return 0;
    }
}
int main(){
   int res = reverse_num();
    if(res==1){
        printf("given no is a palindrome number.");
    }else{
        printf("given no is not a palindrome number.");
    }
}