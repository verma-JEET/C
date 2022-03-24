/* To Check number is Strong or not */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0,f,t,r;
    printf("Enter a number to find strong number or not:");
    scanf("%d",&n);
    t=n;
    while(n)
    {
        i=1;
        f=1;
        r=n%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        sum=sum+f;
        n/=10;
    }
    if (t==sum)
        printf("%d is a Strong number",t);
    else
        printf("%d is not a Strong number",t);
    getch();
}
