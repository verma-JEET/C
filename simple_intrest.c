/* Simple Intrest */

#include<stdio.h>
#include<conio.h>
int main()
{
 /* p=initial principal balance , t=time , r=rate , si=simple intrest*/

float t,r,si,p; 

printf("Enter principal balance:-\n");
scanf("%f",&p);

printf("Enter Rate:-\n");
scanf("%f",&r);

printf("Enter time in years:-\n");
scanf("%f",&t);

si=(p*r*t)/100;
printf("Simple intrest =%.2f",si);

getch();
return 0;
}
