// To find factorial in recursion using function
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    fact(n);
    printf("Factorial=%d",fact(n));
    return n;
}
