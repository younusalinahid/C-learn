// fahrenheit scale to centrigrade scale
//c = (F-32)/1.8

#include<stdio.h>
int main()
{
    float cent, fehr;

    printf("Enter Fehrenheit =");
    scanf("%f",&fehr);

    cent =(fehr-32)/1.8;
    printf("centrigrad escale = %f/n",cent);


    getch();
}

