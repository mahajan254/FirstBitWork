//Fahrenheit from celcius 
#include<stdio.h>
float temp(){
    float c = 2, fahrenheit;

    fahrenheit = (c*9/5)+32;
   // printf("The F value is %f:",fahrenheit);
    return fahrenheit;
}
int main(){
   printf("Given Fahrenheit from to celsius: %f",temp());
}