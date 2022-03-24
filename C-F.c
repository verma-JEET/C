#include<stdio.h>
#include<conio.h>
int main()
{
float c,f;
printf("enter the temprature in celcius=");
scanf("%f",&c);
f=9*c/5+32;
printf("temprature in fahrenhte=%.2f",f);
getch();
return 0;
}