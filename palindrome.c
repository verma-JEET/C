/* TO check a Number is Palindrome or not */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,m;
    printf("Enter a string of a number:");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if (m==sum)
        printf("%d is a Palindrome",m);
    else
        printf("%d is not a Palindrome",m);
    getch();
}
