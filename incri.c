#include<stdio.h>
#include<conio.h>
int main()
{
int x=10,y=20,z;
z=x++*--y;

printf("%d\n%d\n%d",x,y,z);
getch();
return 0;
}