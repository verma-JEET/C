//To show structure implementation
#include<stdio.h>
#include<string.h>
struct employee
{
   int id;
   char name[30];
   int age;
   float salary;
};
int main()
{
    struct employee E={99,"NAMAN VERMA",28,45000},E1,E2;

    E1.id=100;
    strcpy(E1.name,"YASH VERMA");
    E1.age=35;
    E1.salary=25000;

    E2.id=101;
    strcpy(E2.name,"DIMPLE VERMA");
    E2.age=29;
    E2.salary=29000;

    printf("First Employee Details :-\n");
    printf("\t  ID   :- %d \n",E.id);
    printf("\t NAME  :- %s \n",E.name);
    printf("\t  AGE  :- %d \n",E.age);
    printf("\tSALARY :- %.2f \n",E.salary);

    printf("\nSecond Employee Details :-\n");
    printf("\t  ID   :- %d \n",E1.id);
    printf("\t NAME  :- %s \n",E1.name);
    printf("\t  AGE  :- %d \n",E1.age);
    printf("\tSALARY :- %.2f \n",E1.salary);

    printf("\nThird Employee Details :-\n");
    printf("\t  ID   :- %d \n",E2.id);
    printf("\t NAME  :- %s \n",E2.name);
    printf("\t  AGE  :- %d \n",E2.age);
    printf("\tSALARY :- %.2f \n",E2.salary);
}
