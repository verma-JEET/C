/* To Reverse a String Without Using strrev Function */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[20],t;
    int i,j;
    printf("Enter The String:");
    gets(name);
    i=0;
    j=strlen(name)-1;
    while(i<j)
    {
        t=name[i];
        name[i]=name[j];
        name[j]=t;
        i++;
        j--;
    }
    puts(name);
    getch();
    return 0;
}
