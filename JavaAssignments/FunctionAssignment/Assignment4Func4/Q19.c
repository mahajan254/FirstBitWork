//reverrse the number

#include<stdio.h>

int reverse(int num){
    int digit;
   int rev=0;

    

    int temp = num;
    while(num!=0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num/10;
    }
    if(rev==temp){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    
    printf("Enter the number:");
    scanf("%d",&num);

    if(reverse(num)){
        printf("%d is a palindrome number.\n",num);
    }else{
        printf("%d is not a palindrome number.\n",num);
    }
   
}