// To find Area of Circle using function
#include<stdio.h>
float circle(float);
main() // we can use this function without int & void
{
    float r,area;
    printf("Enter Radius of Circle:");
    scanf("%f",&r);
    //area=circle(r);
    printf("Area of Circle is %.2f",area=circle(r));
}
float circle(float b)
{
    float a,pi=3.14;
    a=pi*b*b;
    return a;
}
