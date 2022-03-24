/* Arithmetic With Array */
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},*p;
    p=a;
    p=p+3;
    p--;
    printf("%d %d %d %d %d",p,*p,*(p+2),a[2],2[a]);
    getch();
    return 0;
}
