#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the limit of Series");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("%d\n", fab(i));
    }
}
int fab(int a)
{
    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    else
    {
        return(fab(a-1)+fab(a-2));
    }
    
}