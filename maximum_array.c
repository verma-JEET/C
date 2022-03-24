/* To find Maximum Number in an Array */
#include<stdio.h>
#include<conio.h>
int main()
{
    int number[20],n,max,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the number:");
        scanf("%d",&number[i]);
    }
    max=number[0];
    for (i=0;i<n;i++)
    {
        if (max<number[i])
            max=number[i];
    }
    printf("Maximum Number is = %d",max);
    getch();
    return 0;
}
