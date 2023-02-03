#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter :");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Capitral letter");

    else if (ch>='a' && ch<='z')
        printf("small letter");

    else
        printf("Not a letter");

    getch();
}
