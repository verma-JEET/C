/* To check Lower case, Upper case, Number & Special symbols */

#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Enter a character");
scanf("%c", &c);

if (c>=65 && c<=90)
printf("%c is a upper case",c);

else if (c>=97 && c<=122)
printf("%c is a lower case",c);

else if (c>=48 && c<=57)
printf("%c is a number",c);

else 
printf("%c is a Special symbol",c);

getch();
}  