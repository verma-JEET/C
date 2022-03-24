/* to Calculate strength and tensile of steel */
#include<stdio.h>
#include<conio.h>
int main()
{
    float cc,hardness,tensile,result;
    printf("Enter the hardness of  the steel");
    scanf("%f",&hardness);
    printf("Enter the carbon content of  the steel");
    scanf("%f",&cc);
    printf("Enter the tensile strength of  the steel");
    scanf("%f",&tensile);
    if (hardness>=50)
    {
        if (cc<=0.7 && tensile>=5600)
             printf("your steel's grade is 10",result);
        else
             printf("your steel's grade is 6",result);
    }
    else if (hardness>!50)
    {
        if (cc<=0.7 && tensile>=5600)
              printf("your steel's grade is 8",result);
        else
             printf("your steel's grade is 5",result);
    }
    else if (tensile>!5600)
    {
        if (cc<=0.7 && hardness>=50)
             printf("your steel's grade is 9",result);
    }
    else if (cc<!0.7)
    {
        if (hardness>=50 && tensile>=5600)
         printf("your steel's grade is 9",result);
    }
    else
        printf("your steel is waste throw it and go to sleep");
    getch();
    return 0;
}
