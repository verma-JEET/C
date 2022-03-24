//On name bit field Operation
#include<stdio.h>
struct Date
{
    unsigned int d:5;
    unsigned int :0;
    unsigned int m:4;
    unsigned int y;
};
void main()
{
    struct Date D={14,05,1975};
    printf("Size of Structure 'Date' is :- %d bytes\n",sizeof(struct Date));
    printf("Date is :- %d/%d/%d",D.d,D.m,D.y);
}
