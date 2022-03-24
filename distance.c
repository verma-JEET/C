
/*Conversion of Distance*/
#include<stdio.h>
#include<conio.h>
int main()
{
 float km,m,cm,ft,inch;
 printf("\nenter the distance in kilometer:");
 scanf("%f",&km);
 m=km*1000;
 cm=m*100;
 inch=cm/2.54;
 ft=inch/12;
 printf("Distance in Meters=%.2f\n",m);
 printf("Distance in Centimeter=%.2f\n",cm);
 printf("Distance in Feet=%.2f\n",ft);
 printf("Distance in inches=%.2f\n",inch);
 getch();
 return 0;
}