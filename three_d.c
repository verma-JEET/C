/* TO save and print a 3-D array */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20][20][20],temprature,city,week,i,j,k;
    printf("Enter number of 2-D Elements , Rows & Columns: ");
    scanf("%d%d%d",&city,&week,&temprature);
    printf("Enter the Elements:");
    for(i=0;i<city;i++)
    {
        for(j=0;j<week;j++)
        {
            for(k=0;k<temprature;k++)
            {
                scanf("%d",&num[i][j][k]);
            }
        }
    }
    printf("\nDisplaying values:\n");
    for(i=0;i<city;i++)
    {
        for(j=0;j<week;j++)
        {
            for(k=0;k<temprature;k++)
            {
                printf("%d ",num[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    getch();
    return 0;
}
