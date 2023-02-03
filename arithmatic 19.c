//Weite a program that take two integer and display sum and avg

#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;

    printf("Enter two number = ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("This sum is : %d\n",sum);

    avg = (float)sum/2; //type casting
    printf("This avg is = %f\n",avg);


    getch();
}
