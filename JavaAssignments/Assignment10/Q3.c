//string compare

#include<stdio.h>
int mystrcmp(char*str1,char*str2){
    
   for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++){
    if(str1[i]!=str2[i]){
        return 1;
    }
   }
   return 0;
}

void main(){
    char str1[15]="Nilesh";
    char str2[15]="Mahajan";

    mystrcmp(str1,str2);
   if(mystrcmp(str1,str2)==0){
    printf("both are equal");
   }else{
    printf("both are not equal");
   }
}