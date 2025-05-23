#include<stdio.h>

int perfect_range(int start, int end) {
    int perfectCount = 0;
    int sum;
    
    for (int num = start; num <= end; num++) {
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num && num != 0) {
            printf("%d is a perfect number.\n", num);
            perfectCount++;
        }
    }
    
    return perfectCount;
}

int main() {
    int start, end;
    printf("Enter the starting and ending number: ");
    scanf("%d %d", &start, &end);

    int count = perfect_range(start, end);
    
    printf("Total perfect numbers found: %d\n", count);
    
   
}
