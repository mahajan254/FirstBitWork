//print number from 1 to 10;

#include<stdio.h>

void print_range(int a){
   
    while(a<=10){
        printf("%d",a);
        a++;
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    print_range(a);
    
}