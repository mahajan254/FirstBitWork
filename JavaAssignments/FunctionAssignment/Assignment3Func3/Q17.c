//wap to find a factorial

#include<stdio.h>

void fractorial(int num){
    int factorial = 1;
     int i=1;
    while(i<=num){
        factorial = factorial * i;
        i++;
    }
    printf("Factorial of %d is:%d\n", num,factorial);
}
int main(){
    int num;
    

    printf("enter the number:");
    scanf("%d",&num);

    fractorial(num);
}