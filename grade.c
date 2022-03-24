/* Calculate Grade of 5 Subjects */

#include<stdio.h>
#include<conio.h>
int main()
{
  int PPS,Chem,Math,BCE,Eng;
  float percentage,total;
  printf("Enter marks of 5 subjects");
  scanf("%d%d%d%d%d",&PPS,&Chem,&Math,&BCE,&Eng);
  total=PPS+Chem+Math+BCE+Eng;
  percentage=total/5;
 
  printf("\n Total=%.2f",total);

  if (percentage>90)
{ printf("Youy grade is A"); }
  else if (percentage>80)
{ printf("Your grade is B"); }
  else if (percentage>70)
{ printf("Your grade is C"); }
  else if (percentage>60)
{ printf("Your grade is D"); }
  else
  printf("Your grade is Fail");

 getch();
 return 0;
}