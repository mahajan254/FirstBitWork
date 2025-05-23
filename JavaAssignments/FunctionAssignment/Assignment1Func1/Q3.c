//Finding  perimeter and area of circle;
#include<stdio.h>
void perimetere(){
    int r;
    float perimeter;
    float area;
    printf("*****Perimetere of circle\n*****:");

    printf("Enter the readius:");
    scanf("%d",&r);

    

    perimeter = 2*3.14*r;
    printf("Perimeter of circle:%f\n",perimeter);
}
void area(){
    int r;
    float perimeter;
    float area;

    printf("*****Area of circle\n:*****");
    printf("Enter the readius:");
    scanf("%d",&r);

   

    area = 3.14*r*r;
    printf("Area of circle: %f\n",area);
}

void main(){
    perimetere();
    area();

}