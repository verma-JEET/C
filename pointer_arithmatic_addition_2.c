/* Arithmetic addition */
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},*p;
    p=a;
    p=p+3;
    p--;
    printf("%d %d",*(p+2),*(a+3));
    getch();
    return 0;
}
