#include<stdio.h>
#include<conio.h>
void main()
{
    long int i=1,j=1,n;
    printf("Enter a integer number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        j=j*i;
        i++;
    }
    printf("Factorial of %d is %d",n,j);
    getch();
}
