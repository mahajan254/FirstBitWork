#include<stdio.h>
int prime_range( int num,int start,int end){
    
 

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
    int num;
    int start,end;
    printf("enter the Starting and Ending Number:");
    scanf("%d %d",&start,&end);

    prime_range(num,start,end);
}