#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter 1st Number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter 2nd Number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("%.2f", num1 + num2);
    }
    else if(op == '-')
    {
        printf("%.2f", num1 - num2);
    }
    else if(op == '*')
    {
        printf("%.2f", num1 * num2);
    }
    else if(op == '/')
    {
        printf("%.2f", num1 / num2);
    }
    else
    {
        printf("Invalid Operator!");
    }
    return 0;
}

