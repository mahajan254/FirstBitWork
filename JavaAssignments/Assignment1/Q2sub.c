//Finding  perimeter and area of circle;
#include<stdio.h>
int main(){
    int r;
    float perimeter;
    float area;

    printf("Enter the readius:");
    scanf("%d",&r);

    //perimeter of circle;

    perimeter = 2*3.14*r;
    printf("Perimeter of circle:%f\n",perimeter);

    area = 3.14*r*r;
    printf("Area of circle: %f",area);

}