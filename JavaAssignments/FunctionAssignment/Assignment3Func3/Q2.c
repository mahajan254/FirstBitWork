//Finding  perimeter and area of rectangle;
#include<stdio.h>


void perimetere(int x,int y){
    int p;
    p = (2*x + 2*y);
    printf("Perimeter of Rectangle : %d\n", p);
}

void area(int x,int y){
    int a;
    a = x*y;
    printf("Area of rectangle:%d",a);
}
int  main(){
    int l,b;

printf("Enter the length:");
scanf("%d:",&l);

printf("Enter the breadth:");
scanf("%d:",&b);
 
  perimetere(l, b);
  area(l, b);
  return 0;
}

