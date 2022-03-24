/* TO Find Sum Of Two Matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],b[20][20],result[20][20],i,j,row,column;
    printf("Enter Number of Row And Column : ");
    scanf("%d%d",&row,&column);
    printf("Enter The Element OF 1'st Matrix:"); //Matrix A
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter The Elements of 2'nd Matrix:");//Matrix B
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nEntered Matrix A:-\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEntered Matrix B:-\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)//For addition
    {
        for(j=0;j<column;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nSum of Matrix A & B:-\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t ",result[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
