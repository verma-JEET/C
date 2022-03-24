/* C programe to convert temprature from celcius to fahrenhite and kelvin.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float c,f,k,choice;
printf("\n1: convert temprature from celcius to Fahrenhite and Kelvin");
printf("\n2: convert temprature from Fahrenhite to Celcius and Kelvin");
printf("\n3: convert temprarure from kelvin to Celcius and Fahrenhite");
scanf("%f",&choice);

if(choice==1)
{
printf("\n enter temprature in celcius=");
scanf("%f",&c);
f=9*c/5+32;
k=c+273;
printf("\n temprature in Fahrenhite=%.2f",f);
printf("\n temprature in kelvin=%.2f",k);
getch();
}

else if(choice==2)
{
printf("\n enter temprature in Fahrenhite=");
scanf("%f",&f);
c=(f-32)*5/9;
k=(f-32)*5/9+273;
printf("\n temprature in Celcius=%.2f",c);
printf("\n temprature in kelvin=%.2f",k);
getch();
}

else if(choice==3)
{
printf("\n enter temprature in Kelvin=");
scanf("%f",&k);
c=k-273;
f=(k-273)*9/5+32;
printf("\n temprature in Celcius=%.2f",c);
printf("\n temprature in Fahrenhite=%.2f",f);
getch();
}
else 
{ 
printf("\n envailid D !!!!!");
getch();
}
return 0;
}
