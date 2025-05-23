#include<stdio.h>
int temp(int c,double f){
    printf("enter the celsius:");
    scanf("%d",&c);
    f = (c*9/5)+32;
    printf("%f",f);
}

int  main(){
      int x;
      double y;
   temp(x,y);
   
}