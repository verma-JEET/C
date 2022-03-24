/* Arithmetic Subtraction */
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},*p,*q,r;
    p=a;
    q=a+3;
    r=p-q;
    printf("%d %d",r,q-p);
    getch();
    return 0;
}
