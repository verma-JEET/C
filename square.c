/* Dimension of Square */

#include<stdio.h>
#include<conio.h>
int main()
{
int length,breath; 

printf("Enter length");
scanf("%d",&length);

printf("Enter breath");
scanf("%d",&breath);

if (length==breath)
printf("It's a SQUARE");

else 
printf("It's not a SQUARE");

getch();
return 0;
} 