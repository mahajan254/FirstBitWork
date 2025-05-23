//Print armstrong number in the the given range 1 to n?
#include<stdio.h>
int main() {
    int num, originalNum, sum, digit, count, temp;
    int start,end;

    printf("Enter a starting and Ending number :");
    scanf("%d %d", &start,&end);

    for(num=start;num<=end;num++){
        originalNum = num;
        temp = num;
        
        sum=0;
        count=0;
    
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
            printf("%d is Armstrong number.\n", num);
       
    }
   
    


}