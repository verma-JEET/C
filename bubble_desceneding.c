/* To find descending order using bubble sort */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],n,i,t,f=1;
    printf("Enter the number of Element:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter The number:");
        scanf("%d",&num[i]);
    } while (f==1)
    {
        f=0;
        for (i=0;i<n-1;i++)
       {
            if (num[i]<num[i+1])
         {
            t=num[i];
            num[i]=num[i+1];
            num[i+1]=t;
            f=1;
         }
       }
    }
     printf("Sorted decriment array:");
    for (i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    getch();
    return 0;
}
