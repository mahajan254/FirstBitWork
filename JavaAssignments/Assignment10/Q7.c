//mystrupper

#include <stdio.h>
#include <ctype.h>  

void mystrupper(char* str) {
    int i = 0;
    
   
    while (str[i] != '\0') {
        
        str[i] = tolower(str[i]);
        i++;
    }
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = '\0';

   
    mystrupper(str);

    
    printf("Lower Case string: %s\n", str);

    
}
