/* TO Check a String is Palindrome or not */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[20];
    int i,j;
    printf("Enter Your String:");
    gets(name);
    i=0;
    j=strlen(name)-1;
    while(i<=j)
    {
        if(name[i] != name[j])
        {
            printf("%s is Not a Palindrome",name);
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if(i>j)
        printf("%s is a Palindrome",name);

    getch();
    return 0;
}
