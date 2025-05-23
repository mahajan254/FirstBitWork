//wap tp print table 
#include<stdio.h>

void table(int a){
    
   

    int i=1;
    while(i<=10){
        //int result = a*i;
        printf("%d * %d= %d\n",a,i,a*i);
        i++;


    }
    
}
int main(){
   int a;
   printf("enter the number:");
   scanf("%d",&a);

   table(a);
}