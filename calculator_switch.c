/* To implement A calculator using switch case */
#include<stdio.h>
#include<conio.h>
int main()
{
    char operator;
    float first,second,value;
    printf("Enter the operator (+,-,*,/) :");
    scanf("%c",&operator);
    printf("Enter two Operands: ");
    scanf("%f %f",&first,&second);
    switch (operator)
    {
    case '+':
        {
            value=first+second;
            printf("sum of %.2f and %.2f = %.2f",first,second,value);
            break;
        }
    case '-':
        {
            value=first-second;
            printf("Substraction of %.2f and %.2f = %.2f",first,second,value);
            break;
        }
    case '*':
        {
            value=first*second;
            printf("Multiply of %.2f and %.2f = %.2f",first,second,value);
            break;
        }
    case '/':
        {
            value=first/second;
            printf("Division of %.2f and %.2f = %.2f",first,second,value);
            break;
        }
    default:
        {
            printf("Incorrect Operator");
        }
    }
    getch();
    return 0;
}
