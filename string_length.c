/* To Find String Length Without Using strlen Function */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[30];
    int i,sum=0;
    printf("Enter The String: ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
       sum+=i;
    }
    printf("\nLength of Input String is: %d",i);
    getch();
    return 0;
}
