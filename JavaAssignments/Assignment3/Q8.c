//Check number is strong or not.


#include<stdio.h>
int main(){
    int num;
    
 int sum =0;
    
    int digit=0;
    printf("enter the number:");
    scanf("%d",&num);

    int temp = num;
    while(num!=0)
    {
        digit = num % 10;
        int factorial = 1;
        int i=1;
        while(i<=digit)
       {
         factorial = factorial * i;
          i++;
       }
        sum = sum + factorial;
        num = num/10;

    }
    if (sum == temp) {
        printf("%d is a strong number.\n", temp);
    } else {
        printf("%d is not a strong number.\n", temp);
    }
}