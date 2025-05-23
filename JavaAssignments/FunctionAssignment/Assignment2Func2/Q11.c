// Write a program to find greatest of three numbers using nested if-else. 

#include<stdio.h>
 char compare_numbers() {
    int a = 5, b = 60, c = 9;

    if (a > b) {
        if (a > c) {
            return 'a';
        } else {
            return 'c';
        }
    } else if (b > c) {
        return 'b';
    } else {
        return 'c';
    }
}

int main() {
    printf("%c\n", compare_numbers());
    return 0;
}
