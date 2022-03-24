/* To find RIVERSE of number */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    printf("Reversed number is=%d",sum);
    getch();
}
