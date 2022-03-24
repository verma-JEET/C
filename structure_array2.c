//structure as an array
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int math;
    int physics;
    int chemistry;
    int percentage;
};
int main()
{
    int i,n=0,greater=0;
    struct student S[3];
    printf("Enter Records of Three Students:- \n");
    for(i=0;i<3;i++)
    {
        printf("\nEnter Roll.no :- ");
        scanf("%d",&S[i].roll);
        printf("Enter Name:- ");
        scanf("%s",&S[i].name);
        printf("Enter number of math:- ");
        scanf("%d",&S[i].math);
        printf("Enter number of physics:- ");
        scanf("%d",&S[i].physics);
        printf("Enter number of chemistry:- ");
        scanf("%d",&S[i].chemistry);
        S[i].percentage=(S[i].math+S[i].physics+S[i].chemistry)/3;
        printf("percentage=%d\n",S[i].percentage);
    }
    for(i=0;i<3;i++)
    {
        if(S[i].percentage>greater)
        {
            greater=S[i].percentage;
            n=i;
        }
    }
    printf("\nDetails of Topper Student:-\n");
    printf("\t   Roll.no :- %d\n",S[n].roll);
    printf("\t    Name   :- %s\n",S[n].name);
    printf("\tPercentage :- %d\n",S[n].percentage);
    return 0;
}

