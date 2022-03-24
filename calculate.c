#include<stdio.h>
#include<conio.h>
int main()
{

float num1,num2,result,ope;
char ch,condition;

printf("Enter first number:");
scanf("%f",&num1);
printf("Enter second number:");
scanf("%f",&num2);

printf("Choose operation to perform \n+\n-\n*\n/");
scanf(" %c",&condition);

if(condition=='+')
{
ope=num1+num2;
printf("Addition of two numbers is=%.2f",ope);
getch();
}

else if(condition=='-')
{
ope=num1-num2;
printf("Substraction of two numbers is=%.2f",ope);
getch();
}

else if(condition=='*')
{
ope=num1*num2;
printf("Multiplication of two numbers is=%.2f",ope);
getch();
}

else if(condition=='/')
{
ope=num1/num2;
printf("Division of two numbers is=%.2f",ope);
getch();
}
return 0;
}