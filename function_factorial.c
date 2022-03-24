// TO find the Factorial by using Function (function with argument and return value)
#include<stdio.h>
#include<conio.h>
int fact(int num);
main()
{
    int n,f;
    printf("Enter a Number:");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
