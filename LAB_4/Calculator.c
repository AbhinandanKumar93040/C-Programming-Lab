#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Enter an operator (+  -  *  /): ");
    scanf(" %c", &operation);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (operation == '+')
        printf("Result = %.2f", num1 + num2);
    else if (operation == '-')
        printf("Result = %.2f", num1 - num2);
    else if (operation == '*')
        printf("Result = %.2f", num1 * num2);
    else if (operation == '/')
        printf("Result = %.2f", num1 / num2);
    else
        printf("Invalid operator entered");

    return 0;
}
