/* TO find Area of Triangel */
#include<stdio.h>
#include<conio.h>
void main()
{
    float h,b,area; // h=height of triangle & b=base
    printf("Enter height and base of trianglr ");
    scanf("%f%f",&h,&b);
    area=(h*b)/2;
    printf("Area of triangle is=%.2f",area);
    getch();
}
