/* To find Fibonacci series */
#include<stdio.h>
#include<conio.h>
void main()
{
    unsigned long num;
    unsigned short int i=2,first=0,second=1,third;
    printf("Enter the Number:");
    scanf("%d", &num);
    printf("%d ",first);
    printf("%d ",second);
    while (num>i)
    {
        third=first+second;
        printf("%d ",third);
        first=second;
        second=third;
        i++;
    }
    printf("  Fibonacci series");
    getch();
}
