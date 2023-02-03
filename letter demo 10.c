//uppercase to lowercase letter (ASCII VALU)different of 32 that'way upper+32
#include<stdio.h>
int main()
{
    char upper;
    printf("Enter uppercase letter : ");
    scanf("%c",&upper);

    printf("The lowercase letter : %c",upper+32);


   return 0;
}



