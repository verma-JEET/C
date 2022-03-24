/* Bitwise operator */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a=64,b=32,c,d,e,f,g,h,i;
    c=a>>2;
    d=b>>2;
    e=a<<2;
    f=b<<2;
    g=a&b;
    h=a|b;
    i=a^b;
    printf("value of c=%d",c);
    printf("\nvalue of d=%d",d);
    printf("\nvalue of e=%d",e);
    printf("\nvalue of f=%d",f);
    printf("\nvalue of g=%d",g);
    printf("\nvalue of h=%d",h);
    printf("\nvalue of i=%d",i);
    getch();
    return 0;


}
