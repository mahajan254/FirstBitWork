//4.check the given number is even or odd

#include<stdio.h>
void EvenOdd(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("Number is Even: %d",num);
    }else{
        printf("Number is Odd: %d",num);
    }
}
int main(){
    EvenOdd();
}