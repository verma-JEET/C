/* To find digit sum of a number */
#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,t,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        sum=sum+t;
        n=n/10;
    }
    printf("sum is=%d",sum);
    getch();
}
