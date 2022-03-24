#include<stdio.h>
#include<conio.h>
int main()
{
float f,c;
printf("enter temprature in Fahrenhite=");
scanf("%f",&f);
c=(f-32)*5/9;
printf("Temprature in Celcius=%.2f",c);
getch();
return 0;
}