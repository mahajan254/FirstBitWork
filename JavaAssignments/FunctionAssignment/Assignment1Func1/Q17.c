//wap to find a factorial

#include<stdio.h>

void factorial(){
    int num;
    int factorial = 1;

    printf("enter the number:");
    scanf("%d",&num);

    int i=1;
    while(i<=num){
        factorial = factorial * i;
        i++;
    }
    printf("Factorial of %d is:%d\n", num,factorial);
}
int main(){
   factorial();
}