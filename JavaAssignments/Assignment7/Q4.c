#include<stdio.h>

int main(){
    
    int a[10];
    printf("Enter the elements in an array");
    

    for(int i=0;i<=10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            printf("even:%d\n",a[i]);
        }else{
            printf("odd:%d",a[i]);
        }
    }
}