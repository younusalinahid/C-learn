//Control statement - conditionl control statment, loop control statement
//conditionl control statement - if-else,switch

#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer = ");
    scanf("%d",&num);

  if(num%2==0)
    printf("Even\n");
 else
    printf("Odd\n");

    getch();
}
