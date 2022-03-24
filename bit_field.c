//Bit field Operation
#include<stdio.h>
struct Date
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
};
void main()
{
    struct Date D={28,06,2002};
    printf("Size of Structure 'date' is :- %d bytes\n",sizeof(struct Date));
    printf("Date is :- %d/%d/%d",D.d,D.m,D.y);
}
