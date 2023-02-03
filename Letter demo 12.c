//Uppercase to lowercase without ASCII valu

#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter any uppercase letter = ");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("lowercase letter = %c",lower);


      return 0;
}
