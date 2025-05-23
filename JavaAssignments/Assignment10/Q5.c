#include <stdio.h>
#include <string.h>

// Function to copy n characters from str1 to str2
void mystrncpy(char* str1, char* str2, size_t n) {
    size_t i = 0;

    
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

   
    while (i < n) {
        str2[i] = '\0';
        i++;
    }
    str2[n]='\0';
}

int main() {
    char str1[100];  
    char str2[100];  

   
    printf("Enter the source string: ");
    fgets(str1, sizeof(str1), stdin);

    size_t n;
    printf("Enter the number of characters to copy: ");
    scanf("%zu", &n);
    
  
   

  
    mystrncpy(str1, str2, n);

   
    printf("str2: %s\n", str2); 
    printf("str2 length: %zu\n", strlen(str2));

    return 0;
}
