/* To find Factorial of a number */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1,f=1;
    printf("Enter a number to find Factorial:");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("factorial of %d is=%d",n,f);
    getch();
    return 0;
}
