#include<stdio.h>
#include<conio.h>
int main()
{
float pi,r,h,v;
pi=3.14;
printf("enter the value of radius:");
printf("enter the value of height:");
scanf("%f",&r);
scanf("%f",&h);
v=pi*r*r*h;
printf("v=%f",v);
getch();
return 0;
}