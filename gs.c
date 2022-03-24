/* TO calculate gross salary */
#include<stdio.h>
#include<conio.h>
int main()
{
int gs,bs,hra,da;
printf("Enter basic salary");
scanf("%d",&bs);
if (bs>20000)
{
hra=0.3*bs;
da=0.95*bs;
}
else if (bs>10000)
{
hra=0.25*bs;
da=0.9*bs;
}
else
{
hra=0.2*bs;
da=0.8*bs;
}
gs=bs+hra+da;
printf("Your gross salary is=%d",gs);
getch();
return 0;
}

