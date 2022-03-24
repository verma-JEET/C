#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n>0)
    {
        if(n%2==0)
            printf("Number is EVEN");
        else
            printf("Number is ODD");
    }
    else
    {
        if(n%3==0)
            printf("Number is NEGATIVE and Divisible by 3");
        else
            printf("Number is NEGATIVE and NOT Divisible by 3");
    }
    getch();
}

