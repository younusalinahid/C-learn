#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedtemp;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter any choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter the Fahrenheit temperature :");
        scanf("%f",&temp);
        convertedtemp = (temp-32)/1.8;
        printf("The temperature in celsius is : %f\n",convertedtemp);
    }
    case 2:
    {
        printf("Enter the Celsius temperature :");
        scanf("%f",&temp);
        convertedtemp = (1.8*temp)+32;
        printf("The temperature in Fahrenheit  is : %f\n",convertedtemp);
        break;

    }


    default:
        printf("Not a correct option");

        }
    }
