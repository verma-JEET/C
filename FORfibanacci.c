/* TO Print Fibonacci series using For Loop */
#include<stdio.h>
#include<conio.h>
void main()
{
    int limit,i,a=0,b=1,c;
    printf("Enter the Limit:");
    scanf("%d",&limit);
    printf("Fibonacci Series is:");
    for (i=1;i<limit;i++)
    {
        printf("%d \t",a);
        c=a+b;
        a=b;
        b=c;
    }
    getch();
}
