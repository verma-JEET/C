/* TO find greatest number among 2 numbers */

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
if (a>b)
printf("%d is greater number",a);
else
printf("%d is greater number",b);
getch();
}