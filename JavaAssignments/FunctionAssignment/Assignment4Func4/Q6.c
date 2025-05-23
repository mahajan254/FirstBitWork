// 1. Find the price of item when discount is given (specify different discount based on 
// price) 

#include<stdio.h>

int price_discount(int p){
    

 float dis;

 int finalprice;

 if(p < 500){
    dis = p * 0.1;
 }else if(p <1000){
    dis  = p * 0.2;
 }else if (p < 2000){
    dis = p *0.3;
 }else{
    dis=0;
 }

 finalprice = p - dis;

  printf("Price: %d\n",p);
 printf("Discount: %f\n", dis);
 return finalprice;

}
int main()
{
  int price;
 printf("Enter the price:");
 scanf("%d",&price);

 price_discount(price);
 printf("FinalPrice:%d",price_discount(price));




}




