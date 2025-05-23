////Check number is strong or not in given rang 1 to n.


#include<stdio.h>

void strong_num(int num,int start,int end){
    int sum=0;
    int digit;
    for(num=start;num<=end;num++){
        int temp = num;
        sum=0;
        while(temp!=0)
        {
            digit = temp % 10;
            int factorial = 1;
            int i=1;
            while(i<=digit)
           {
             factorial = factorial * i;
              i++;
           }
            sum = sum + factorial;
            temp = temp/10;
    
        }
        if (sum == num) {
            printf("%d is a strong number.\n", num);
        } 
    }
}
int main(){
    int num;
   
    
    int start,end;

    printf("Enter a starting and Ending number :");
    scanf("%d %d", &start,&end);

    strong_num(num,start,end);
    
}