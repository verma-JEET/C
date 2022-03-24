/* Find Greatest number among 3 numbers */

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
 { if (a>c)
   printf("%d is greater number",a);
   else 
   printf("%d is grester number",b);
 }
   else
 { if (b>c)
   printf("%d is greater number",b);
  else 
   printf("%d is greater number",c);
 }
getch();
}