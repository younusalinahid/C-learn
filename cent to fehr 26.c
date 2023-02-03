// centrigrade scale to fahrenheit scale
// F = (c * 1.8) + 32

#include<stdio.h>
int main()
{
    float cent, fehr;

    printf("Enter centrigrade =");
    scanf("%f",&cent);



    fehr = (cent * 1.8) + 32;
    printf("Fehrenheit scale = %f/n",fehr);


    getch();
}
