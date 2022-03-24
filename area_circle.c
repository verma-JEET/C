/* area of circle */

#include<stdio.h>
#include<conio.h>
int main()
{
float pi,r,area;
pi=3.14;
printf("enter the value of radius");
scanf("%f",&r);
area=pi*r*r;
printf("area=%f",area);
getch();
return 0;
}