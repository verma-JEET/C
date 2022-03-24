#include<stdio.h>>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number you want to multiply:");
    scanf("%d",&num);
    printf("Multiplication table of %d=\n",num);
    scanf("%d",&num);
    for(i=1;i<11;i++);
    {
        result=num*i++;
        printf("%d*%d=%d",num,result,i)
    }
    getch();
}
