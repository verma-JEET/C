/* To find Armstrong Number using For Loop */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,t,r,sum=0;
    printf("Enter A Three Digit number:");
    scanf("%d",&n);
    t=n;
    for (n;n>0;n/=10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }
    if (t==sum)
        printf("%d is A Armstrong Number",t);
    else
        printf("%d is not A Armstrong Number",t);
    getch();
    return 0;
}
