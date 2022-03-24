/* Addition of arithmatic pointer  */
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},*p;
    p=a;
    p=p+3;
    printf("%d",*p);
    getch();
    return 0;
}
