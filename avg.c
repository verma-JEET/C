#include<stdio.h>
#include<conio.h>
int main()
{
    int phy,chem,math,eng,hindi;
    float avg,total;
    printf("Enter marks of chem:-\nEnter marks of phy:-\nEnter marks of math:-\nEnter marks of hindi:-\nEnter marks of eng:-\n");
    scanf("%d%d%d%d%d",&chem,&phy,&math,&hindi,&eng);
    total=phy+chem+math+hindi+eng;
    avg=total/5;

    if (avg>=0 && avg<=25)
        printf("your grade is D");
    else if (avg>=25 && avg<=50)
        printf("your grade is C");
    else if (avg>=50 && avg<=75)
        printf("your grade is B");
    else if (avg>=75 && avg<=100)
        printf("your grade is A");
    else
        printf("invailid input");

        printf("average=%f",&avg);

        getch();
    return 0;

}
