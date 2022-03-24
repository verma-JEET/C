/* Area of Rectangle */

#include<stdio.h>
#include<conio.h>
int main()
{
float area,length,width;
printf("Enter length of Rectangal"); 
scanf("%f",&length);
printf("Enter width of Rectangal");
scanf("%f",&width);
area=length*width;
printf("Area of Rectangal is =%.2f",area);
getch();
return 0;
}