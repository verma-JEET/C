/* To find a Number Using Binary Search */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],i,n,k,l,r,mid;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    printf("Enter %d elements in Ascending Order:",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter a Number for Search:");
    scanf("%d",&k);
    l=0;
    r=n-1;
    while (l<=r)
    {
        mid=(l+r)/2;
        if (num[mid]==k)
        {
            printf("Your Number is Found");
            printf("\n%d is Present in Location %d",k,mid+1);
            break;
        }
        else if(num[mid]>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(l>r)
    {
        printf("Your Number is Not Found");
    }
    getch();
    return 0;
}
