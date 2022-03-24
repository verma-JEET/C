#include<stdio.h>
#include<conio.h>
int main()
{
float m1,m2,m3,m4,m5,aggr,per;
printf("Enter marks in 5 subjects:");
scanf("%f",&m1);
scanf("%f",&m2);
scanf("%f",&m3);
scanf("%f",&m4);
scanf("%f",&m5);
aggr=m1+m2+m3+m4+m5;
per=aggr/5;
printf("Aggrigate of marks=%f",aggr);
printf("Percentage of marks=%.1f",per);
getch();
return 0;
}