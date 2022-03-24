/* To find ascending order using insertion sort */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],n,i,j,k;
    printf("Enter the number of Element:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter The number:");
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
        k=num[i];
        j=i-1;
         while (j>=0 && k<num[j])
        {
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=k;
    }
    printf("sorted list ascending:");
    for (i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    getch();
    return 0;
}


