//Calculate sum of numbers in the given range.
#include<stdio.h>
int sum_range(int start,int end){
    int sum =0;
    int i = start;
    while(i<=end){
        sum += i;
        i++;
    }
   return sum;
}
int main(){
    int start;
    int end;
    //int sum =0;

    printf("enter the starting number:");
    scanf("%d",&start);

    printf("enteer the ending number:");
    scanf("%d",&end);

   sum_range(start,end);
   printf("The sum of numbers %d to %d is: %d\n", start, end, sum_range(start,end));
} 