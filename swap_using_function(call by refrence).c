// TO swap the values using function
#include<stdio.h>
int swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("a=%d\nb=%d",*x,*y);
}
int main()
{
    int a,b;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    printf("Enter the Value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}
