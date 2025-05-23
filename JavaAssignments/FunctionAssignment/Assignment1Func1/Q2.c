//Finding  perimeter and area of rectangle;

#include<stdio.h>
void permetere(){
 int l,b,perimeter,area;

printf("Enter the length:");
scanf("%d:",&l);

printf("Enter the breadth:");
scanf("%d:",&b);
    perimeter = (2*l + 2*b);
    printf("Perimeter of Rectangle : %d\n", perimeter);
}
void area(){
    int l,b,perimeter,area;

    printf("Enter the length:");
    scanf("%d:",&l);
    
    printf("Enter the breadth:");
    scanf("%d:",&b);
    
    
    
    //area of rectangle
    area = l*b;
    printf("Area of rectangle:%d\n",area);
}
void main(){
   area();
   permetere();
}
