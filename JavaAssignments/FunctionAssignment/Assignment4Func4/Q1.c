#include<stdio.h>
int temp(int c,double f){
    printf("enter the celsius:");
    scanf("%d",&c);
    f = (c*9/5)+32;
    return f;
}

int  main(){
      int x;
      double y;
   float res = temp(x,y);
   printf("Temp:%f",res);
   
}