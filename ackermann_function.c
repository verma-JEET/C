// am= Ackermann
#include<stdio.h>
int am(int m,int n);
void main()
{
    int m,n;
    printf("Enter two Numbers: ");
    scanf("%d%d",&m,&n);
    printf("\nOUTPUT :- %d ",am(m,n));
}
int am(int m,int n)
{
    if(m==0)
        return n+1;
    else if(n==0)
        return am(m-1,1);
    else
        return am(m-1,am(m,n-1));
}
