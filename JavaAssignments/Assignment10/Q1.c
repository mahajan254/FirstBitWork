//string copy

#include<stdio.h>
char* mystrcpy(char*str1,char*str2){
    int i=0;
    while(str1[i]!='\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; 
    return str2;

   
}

void main(){
    char str1[7]="Nilesh";
    char str2[7];

    mystrcpy(str1,str2);
    printf("%s",str2);
}