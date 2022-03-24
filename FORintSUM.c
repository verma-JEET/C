/* To Print sum of first 10 Integer number using for Loop */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number to Find sum:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of first %d Integer Number is:%d",n,sum);
    getch();
    return 0;
}
