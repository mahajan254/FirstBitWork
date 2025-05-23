// Check number is armstrong or not? 

#include<stdio.h>
int armstrong(int num){
    int  originalNum, sum = 0, digit, count = 0, temp;
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
    int num;

    printf("Enter a number :");
    scanf("%d", &num);

    if(armstrong(num)){
        printf("%d is Armstrong number.\n", num);
    }else{
        printf("%d is not Armstrong number.\n", num);
    }


}