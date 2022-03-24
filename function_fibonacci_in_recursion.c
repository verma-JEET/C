// To find Fibonacci series in recursion
#include<stdio.h>
int fibo(int n)
{
   if(n==0 || n==1)
   {
       return n;
   }
   else
   {
       return fibo(n-1) + fibo(n-2);
   }
}
int main()
{
    int n,i;
    printf("Enter the Limit:");
    scanf("%d",&n);
    printf("Fibonacci Series is:-\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
    return 0;
}
