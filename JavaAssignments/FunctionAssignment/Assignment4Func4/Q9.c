#include <stdio.h>

int menu(int choice) {
    int num;
    float basicSalary;

    if (choice == 1) {
        printf("Enter a number to check if it is Even or Odd: ");
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            return 1;  
        } else {
            return 0;  
        }
        
    } else if (choice == 2) {
        printf("Enter the basic salary: ");
        scanf("%f", &basicSalary);

        float hra = basicSalary * 0.15;
        float da = basicSalary * 0.10;
        float grossSalary = basicSalary + hra + da;

        printf("Basic Salary: %.2f\n", basicSalary);
        printf("HRA: %.2f\n", hra);
        printf("DA: %.2f\n", da);
        printf("Gross Salary: %.2f\n", grossSalary);

        return 1;  

    } else {
        printf("Invalid choice. Please choose a valid option.\n");
        return -1;  
    }
}

int main() {
    int choice;
    int result;

    printf("Menu:\n1. Even/Odd\n2. Basic Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    result = menu(choice);

    if (result == 1) {
        if (choice == 1) {
            printf("The operation was successful.\n");
        }
    } else if (result == 0) {
        printf("The number is odd.\n");
    } else if (result == -1) {
        printf("Invalid choice.\n");
    }

    return 0;
}
