//wap to find a factorial

#include<stdio.h>

int factorial(int num){
    int factorial = 1;
     int i=1;
    while(i<=num){
        factorial = factorial * i;
        i++;
    }
    return factorial;
}
int main(){
    int num;
    

    printf("enter the number:");
    scanf("%d",&num);

    factorial(num);
    printf("Factorial of %d is:%d\n", num,factorial(num));
}
