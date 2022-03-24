/* TO Check Prime number */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<n)
    {
        if (n/i==0)
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

