/* To print sum of first 10 integer */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of First %d Integer Number is: %d",n,sum);
    getch();
}
