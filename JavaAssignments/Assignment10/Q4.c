#include<stdio.h>
char* mystrcat(char*str1,char*str2){
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    int j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
}

void main(){
    char str1[15]="Nilesh";
    char str2[15]=" Mahajan";

    mystrcat(str1,str2);
    printf("%s",str1);
}