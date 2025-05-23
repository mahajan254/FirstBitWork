//Calculate sum of numbers in the given range.
#include<stdio.h>
void sum_range(){
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
    printf("The sum of numbers %d to %d is: %d\n", start, end, sum);
}
int main(){
    sum_range();
} 