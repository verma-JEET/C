/* To find Strong Number using for loop */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,i,f,t;
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    for (n;n>0;n/=10)
    {
        r%=10;
        f=1;
        for (r;r!=0;r--)
        {
            f*=r;
        }
        sum+=f;
    }
    if (t==sum)
        printf("%d is a strong Number",t);
    else
        printf("%d is not a Strong Number",t);
    getch();
}
