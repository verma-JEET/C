/* TO find descending order */
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[20],n,i,j,t;
     printf("Enter elements of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (num[i]<num[j])
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }
    printf("Descending Order: ");
    for (i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    getch();
}
