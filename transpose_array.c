/* To Find Transpose OF Array */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],t[20][20],i,j,d; //d=dimension or row and column, t=transpose of matrix
    printf("Enter The Dimension OF Matrix: ");
    scanf("%d",&d);
    printf("Enter The Element OF Matrix:");
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            t[j][i]= a[i][j];
        }
    }
    printf("\nEntered Matrix :-\n");
     for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix :-\n");
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
