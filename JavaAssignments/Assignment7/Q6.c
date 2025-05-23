#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

   
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1; 

       
       
            
            for (int j = 2; j < num; j++) {
                if (num % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        

        
        if (isPrime) {
            printf("%d\n", num);
        }
    }

    return 0;
}
