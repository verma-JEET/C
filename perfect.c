/* To check a number is Perfect or not */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum,i;
    sum=0;
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if (n==sum)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
    getch();
}
