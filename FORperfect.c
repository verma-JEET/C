/* To find Perfect Number using For Loop */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,t,sum=0,i=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    t=n;
    for (i;i<=n/2;i++)
    {
        if (n%i==0)
        {
          sum+=i;
        }
    }
    if (t==n)
        printf("%d is A Perfect Number",t);
    else
        printf("%d is not A Perfect Number",t);
    getch();
    return 0;
}
