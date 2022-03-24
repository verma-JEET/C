/* to calculate electricity bill */

#include<stdio.h>
#include<conio.h>
int main()
{
    int unit,result;
    printf("Enter the unit");
    scanf("%d",&unit);
    if (unit<=100)
    {
        result=unit*10;
    }
    else if (unit<=200)
    {
        result=(100*10)+(unit-100)*15;
    }
    else if (unit<=300)
    {
        result=(100*10)+(100*15)+(unit-200)*20;
    }
    else if (unit>300)
    {
        result=(100*10)+(100*15)+(100*20)+(unit-300)*25;
    }
    printf("Your total Electricity bill is=%d",result);
    getch();
    return 0;
}