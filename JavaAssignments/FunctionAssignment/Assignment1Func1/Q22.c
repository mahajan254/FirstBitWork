#include<stdio.h>
void prime_range(){
    int num;
    int start;
    int end;
 printf("enter the Starting and Ending Number:");
 scanf("%d %d",&start,&end);

 for(num=start;num<=end;num++){
    int i=2;
    int flag=0;
        while(i<=num/2)
        {
            if(num%i==0){
                flag = 1;
                break;
                
            }
            i++;
        }
        if(flag==0 && num > 1){
            printf(" %d its prime number \n",num);
        }
    
 }
}
int main(){
    prime_range();
    

}