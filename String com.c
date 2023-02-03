#include<stdio.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "younus ali nahid";

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("strings are equal");
    }
    else
        printf("strings are not equal");


    getch();
}
