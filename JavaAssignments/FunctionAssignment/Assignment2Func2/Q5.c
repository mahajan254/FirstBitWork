#include<stdio.h>
int perfect(){
    int num;
     int sum =0;
     printf("Enter the number:");
     scanf("%d",&num);

     
      for(int i=1;i<num;i++){
        if(num % i==0){
           sum = sum + i;
        }
        
     }
     if (sum == num) {
       return 1;
    }else{
        return 0;
    }
}
int main(){
     int res = perfect();
     if(res==1){
        printf("Given number is perfect number");
     }else{
        printf("Given number is not perfect number");
     }
}