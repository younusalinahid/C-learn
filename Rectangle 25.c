//Area of rectangle = length * width

#include<stdio.h>
int main()
{
    float length,width,area;

    printf("Enter length = ");
    scanf("%f",&length);

    printf("Enter width = ");
    scanf("%f",&width);

    area = length * width;
    printf("The rectangle is = %.2f",area);


    getch();
}
