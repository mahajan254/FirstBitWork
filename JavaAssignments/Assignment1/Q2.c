//Finding  perimeter and area of rectangle;
#include<stdio.h>

void main(){
    int l,b,perimeter,area;

printf("Enter the length:");
scanf("%d:",&l);

printf("Enter the breadth:");
scanf("%d:",&b);

//perimeter of recatngle

perimeter = (2*l + 2*b);
printf("Perimeter of Rectangle : %d\n", perimeter);

//area of rectangle
area = l*b;
printf("Area of rectangle:%d",area);
}

