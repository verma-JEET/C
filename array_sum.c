// To find avg of studen's marks
#include<stdio.h>
void main()
{
    int marks[20],i,sum=0,n;
    float avg;
    printf("Enter number of students:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the marks of student: ");
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    for (i=0;i<n;i++)
    {
         printf("%d ",marks[i]);
    }
    avg=sum/n;
    printf("\nAvg of %d students is=%.2f",n,avg);
    getch();
}
