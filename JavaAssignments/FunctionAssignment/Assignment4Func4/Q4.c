//4.check the given number is even or odd

#include<stdio.h>

int even_odd(int num){
    int even,odd;
    if(num%2==0){
       return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

   if(even_odd(num)){
    printf("given no is even:%d ",num);}
    else{
    printf("given no is odd:%d ",num);}
}