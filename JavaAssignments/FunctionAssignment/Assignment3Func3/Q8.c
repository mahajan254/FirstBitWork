// Accept two numbers from user and an operator (+,-,/,*,%) based on that 
// perform the desired operations. 

#include <stdio.h>

void perform(int a,int b,char op){
    int res;
    

    if (op == '*') {
        res = a * b;
    } else if (op == '/') {
        if (b == 0) {
            printf("Error\n");
            return 1;
        }
        res = a / b;
    } else if (op == '+') {
        res = a + b;
    } else if (op == '-') {
        res = a - b;
    } else if (op == '%') {
        if (b == 0) {
            printf("Error\n");
            return 1;
        }
        res = a % b;
    } else {
        printf("Error\n");
    }

    printf("Result is :%d\n", res);
}
int main() {
    int a;
    int b;
    char op;

    printf("Enter the two number");
    scanf("%d %d",&a,&b);

    printf("Enter the operator + - / *:");
    scanf(" %c",&op);

    perform(a,b,op);

    return 0;
}

