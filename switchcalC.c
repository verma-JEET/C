/* calcuator using switchcase */

#include<stdio.h>
int main()
{
    int x,y;
    char a;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    printf("\n Enter a operation to apply");
    scanf(" %c",&a);
    switch(a)
    {
    case '+':
        printf("\nAddition of %d and %d is=%d",x,y,x+y);
        break;
    case '-':
        printf("\nSubstraction of %d and %d is=%d",x,y,x-y);
        break;
    case '*':
        printf("\nMultiplication of %d and %d is=%d",x,y,x*y);
        break;
    case '/':
        printf("\nDivision of %d and %d is=%d",x,y,x/y);
        break;
    default:
        printf("\nInvailid operation");
    }
}
