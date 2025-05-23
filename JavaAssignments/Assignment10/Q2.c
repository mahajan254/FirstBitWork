//find string length

#include<stdio.h>
int mystrlen(char*str1){
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    
    return i;

   
}

void main(){
    char str1[]="Nilesh";
    int len = mystrlen(str1); // Store the length of the string
    printf("Length of the string is: %d\n", len);
}