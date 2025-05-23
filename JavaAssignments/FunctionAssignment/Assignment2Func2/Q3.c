#include<stdio.h>

int prime(){
    int num;
 printf("enter the number:");
 scanf("%d",&num);
    int i=2;
int flag=0;
    while(i<num/2)
    {
        if(num%i==0){
            flag = 1;
            break;
            
        }
        i++;
    }
    if(flag==0){
       return 1;
    }else{
        return 0;
    }

}
int main(){
    int res = prime();
     if(res==1){
        printf("given number is prime");
     }else{
        printf("given number is not prime");
     }

}