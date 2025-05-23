// Check number is armstrong or not? 

#include<stdio.h>

int armstrong(){
    int num, originalNum, sum = 0, digit, count = 0, temp;

    printf("Enter a number :");
    scanf("%d", &num);

    originalNum = num;
    temp = num;

    while(temp >0){
        temp /=10;
        count++;
    }
   temp=num;
    while (temp > 0) {   
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == originalNum)
        return 1;
    else
       return 0;
    
}
int main() {
    int res = armstrong();
    if(res==1){
        printf("given number is armstrong");
    }else{
        printf("given number is not armstrong");
    }


}