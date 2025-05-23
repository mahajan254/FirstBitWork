//Finding  perimeter and area of rectangle;
#include<stdio.h>


int perimetere(int x,int y){
    int p;
    p = (2*x + 2*y);
   return p;
}

int area(int x,int y){
    int a;
    a = x*y;
    return a;
}
int  main(){
    int l,b;

printf("Enter the length:");
scanf("%d:",&l);

printf("Enter the breadth:");
scanf("%d:",&b);
 
  int p = perimetere(l, b);
  printf("Perimetere of rectangle: %d",p);

  int a = area(l, b);
  printf("area of rectangle: %d",a);
  return 0;
}

