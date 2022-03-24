/* To print Value and Address of Variable of Multi-Level Pointer */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=96,*p,**x,***y,****z;
    p=&a;
    x=&p;
    y=&x;
    z=&y;
    printf("a=%d \na=%d \n&a=%d \n&a=%d \n&a=%d",*p,**&x,***&y,****&z,&a);
    getch();
    return 0;
}
