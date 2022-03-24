/* To find Multiplication of Matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,p,q,c,d,k,sum=0;
    int first[10][10],second[10][10],multiply[10][10];
    printf("Enter Number of Row & Column of First Matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter Elements of First Matrix\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
            scanf("%d",&first[c][d]);
    }
    printf("Enter Number of Row & Column of Second Matrix\n");
    scanf("%d%d",&p,&q);
    if(n != p)
        printf("The Multiplication is not Possible\n");
    else
    {
        printf("Enter Elements of Second Matrix\n");
        for(c=0;c<p;c++)
        {
            for(d=0;d<q;d++)
                scanf("%d",&second[c][d]);
        }
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
            {
                for(k=0;k<p;k++)
                {
                    sum=sum+first[c][k]*second[k][d];
                }
                multiply[c][d]=sum;
                sum=0;
            }
        }
        printf("Product of The Matrices:\n");
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
                printf("%d\t",multiply[c][d]);

            printf("\n");
        }
    }
    getch();
    return 0;
}
