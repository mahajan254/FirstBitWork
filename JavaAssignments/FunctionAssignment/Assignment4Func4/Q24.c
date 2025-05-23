#include<stdio.h>

int strong_num(int start, int end) {
    int strongCount = 0;
    int sum, digit;
    
    for (int num = start; num <= end; num++) {
        int temp = num;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            int factorial = 1;
            int i = 1;
            while (i <= digit) {
                factorial = factorial * i;
                i++;
            }
            sum = sum + factorial;
            temp = temp / 10;
        }
        if (sum == num) {
            printf("%d is a strong number.\n", num);
            strongCount++;
        }
    }
    
    return strongCount;
}

int main() {
    int start, end;
    printf("Enter a starting and ending number: ");
    scanf("%d %d", &start, &end);

    int count = strong_num(start, end);
    
    printf("Total strong numbers found: %d\n", count);
    
    
}
