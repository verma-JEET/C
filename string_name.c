/* To Print name of String */
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    printf("Enter Your Name");
    scanf("%[^\n]",name);// we can use %s in place of %[^\n]
    printf("Your Name is %s",name);//%s shows string constant
    getch();
    return 0;
    //if we use %s in scanf then only one word will print, without space. [^\n] function allow to print string, until new line key pressed
}
