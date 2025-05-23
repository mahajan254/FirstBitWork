//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively

#include<stdio.h>

int main(){
    
    float basic,ta,da,hra;
    float total_salary;
 

    printf("Enter the baisc salary:");
    scanf("%f",&basic);

    if(basic<=5000){
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }else{
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total_salary = basic+ da + ta + hra;

    printf("basic salary:%.2f\n",basic);
    printf("da:%.2f\n",da);
    printf("ta:%.2f\n",ta);
    printf("hra:%.2f\n",hra);

    printf("total salary:%.2f\n",total_salary);

}