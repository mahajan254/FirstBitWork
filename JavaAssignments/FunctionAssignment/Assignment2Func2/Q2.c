//Calculate sum of numbers in the given range.
#include<stdio.h>

int sum(){
    int start;
    int end;
    int sum =0;

    printf("enter the starting number:");
    scanf("%d",&start);

    printf("enteer the ending number:");
    scanf("%d",&end);

    int i = start;
    while(i<=end){
        sum += i;
        i++;
    }
    return sum;
}
int main(){

    
    int result = sum();
    
    printf("The sum of numbers %d", result);
} 