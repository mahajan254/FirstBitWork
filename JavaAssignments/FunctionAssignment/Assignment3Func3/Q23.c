//check perfect number in the given range 1 to n?
#include<stdio.h>

void perfect_range(int num,int start,int end){
   int sum;
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
int main(){
     int num;
     int start,end;
     printf("Enter the starting and ending number:");
     scanf("%d %d",&start,&end);

     perfect_range(num,start,end);

    
     
      
}