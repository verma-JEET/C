/* To print Value and Address of Variable using Pointer */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=66,*p;
    p=&a;
    printf("a=%d \n&a=%d \n&p=%d \n&a=%d",*p,p,&a,&p);
    getch();
    return 0;
}
