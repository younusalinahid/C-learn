#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number = ");
    scanf("%d",&num1);

    printf("Enter second number = ");
    scanf("%d",&num2);

    if(num1>num2)
       printf("Large =%  d\n",num1);

    else if(num1<num2)
       printf("Large = %d\n",num2);

    else
        printf("Number are equal ");


}
