/* Comparison of String */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int result;
    char a[20],b[20],c[20];
    printf("Enter first String:");
    gets(a);
    printf("Enter Second String:");
    gets(b);
    printf("Enter Third String:");
    gets(c);
    result=strcmp(a,b);
    printf("strcmp(a,b) is %d\n",result);
    result=strcmp(a,c);
    printf("strcmp(a,c) is %d",result);
    getch();
    return 0;
    //output o=matched , not matched=non zero no.
}
