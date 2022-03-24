/* To find Armstrong number */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum=0,t;
    printf("Enter a three digit number:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n/=10;
    }
    if (t==sum)
        printf("%d is ARMSTRONG number",t);
    else
        printf("%d is not a ARMSTRONG number",t);
    getch();
    return 0;
}
