
// Write a program to find greatest of three numbers using nested if-else. 

#include<stdio.h>

int three_sum(int a,int b,int c){

    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else if(b>c){
       return b;
    }else{
        return a;
    }
}

int  main(){
    int a=5 , b=60 , c=9;
    three_sum(a,b,c);
    printf("The Greatest No is: %d",three_sum(a,b,c));
}