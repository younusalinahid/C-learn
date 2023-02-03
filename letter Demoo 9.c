//lowercase to uppercrase latter (ASCII VALU) different of 32 that'way lower-32
#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);

    printf("The uppercase letter : %c",lower-32);


    return 0;
}
