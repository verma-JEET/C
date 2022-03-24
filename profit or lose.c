/* Calculate profit or loss */
#include<stdio.h>
#include<conio.h>
int main()
{
float sp,cp,p,l;
printf("\n Enter Cost price and selling price");
scanf("%f%f",&cp,&sp);
p=sp-cp;
l=cp-sp;
if (p>0)
printf("\n seller made a profit of rs.=%f",p);
else
{if (p<0)
printf("\n seller made a loss of rs.=%f",l);

else
{if (p=0)
printf("\n seller made no profit and loss\n");

getch();
return 0;
}}}