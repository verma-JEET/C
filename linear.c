/* To find a Number Using Linear search */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],i,n,k;
    printf("Enter The Number of Element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Number:");
        scanf("%d",&num[i]);
    }
    printf("Enter a Number for Search:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(num[i]==k)
        {
            printf("%d is Present in Location %d",k,i+1);
            break;
        }
        else if(num[i]==n)
            printf("%d is Not Present",k);
    }
    getch();
    return 0;
}
