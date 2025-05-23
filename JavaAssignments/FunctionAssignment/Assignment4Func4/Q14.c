//check the number is prime or not 
#include<stdio.h>
int prime(int num){
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
#include<stdio.h>
int main(){
    int num;
 printf("enter the number:");
 scanf("%d",&num);
    if(prime(num)){
        printf("its prime number %d",num);
    }else{
        printf("its not prime number %d",num);
    }

}