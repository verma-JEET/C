/* To find Minimum Number in an Array */
#include<stdio.h>
#include<conio.h>
int main()
{
    int number[20],n,i,min;
    printf("Enter the number of Element:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter numbers:");
        scanf("%d",&number[i]);
    }
    min=number[0];
    for (i=1;i<n;i++)
    {
        if (min>number[i])
            min=number[i];
    }
    printf("Minimum number is = %d",min);
    getch();
    return 0;
}
