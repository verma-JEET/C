/* To find a number is prime or not */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    i=2;
    printf("Enter a integer number");
    scanf("%d",&n);
    while(i<n)
    {
        if (n%i==0)
            break;
        i++;
    }
    if (i==n)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    getch();
    return 0;
}
