#include <stdio.h>

int armstrong_range(int start, int end) {
    int originalNum, sum, digit, count, temp;
    int armstrongCount = 0;

    for (int num = start; num <= end; num++) {
        originalNum = num;
        temp = num;
        sum = 0;
        count = 0;

        while (temp > 0) {
            temp /= 10;
            count++;
        }

        temp = num;
        
        while (temp > 0) {
            digit = temp % 10;
            int power = 1;

            for (int i = 0; i < count; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == originalNum) {
            printf("%d is an Armstrong number.\n", originalNum);
            armstrongCount++;
        }
    }

    return armstrongCount;
}

int main() {
    int start, end;

    printf("Enter a starting and ending number: ");
    scanf("%d %d", &start, &end);

    int count = armstrong_range(start, end);

    if (count == 0) {
        printf("No Armstrong numbers found in the range %d to %d.\n", start, end);
    } else {
        printf("Total Armstrong numbers found: %d\n", count);
    }

   
}
