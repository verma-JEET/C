/* To Find String Length */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char word[20];
    printf("Enter The String:");
    gets(word);
    printf("\n String Length is %d",strlen(word));
    getch();
    return 0;
}
