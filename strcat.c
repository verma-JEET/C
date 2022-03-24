/* TO Concatenation (addition) of String */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("Enter The First String:");
    gets(a);
    printf("Enter The Second String:");
    gets(b);
    printf("Concatenation String:\n");
    strcat(a,b);
    puts(a);
    getch();
    return 0;
}
