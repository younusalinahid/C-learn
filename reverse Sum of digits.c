#include<stdio.h>
int main()
{
    int num, temp, sum=0, r;
    printf("Enter any number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    printf("Reverse of digits = %d\n",sum);


    getch();
}

