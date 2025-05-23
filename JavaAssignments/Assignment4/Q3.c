//check perfect number in the given range 1 to n?
#include<stdio.h>
int main(){
     int num;
     int sum;
     int start,end;
     printf("Enter the starting and ending number:");
     scanf("%d %d",&start,&end);

     for(num=start;num<=end;num++){
        sum = 0;
        for(int i=1;i<num;i++){
            if(num % i==0){
               sum = sum + i;
            }
            
         }
         if (sum == num && num!=0) {
            printf("%d is a perfect number.\n", num);
        }
     }
     
      
}