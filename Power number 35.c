#include<stdio.h>
int main()
{
     int x,y;
   printf("Enter x = ");
   scanf("%d",&x);


   printf("Enter y = ");
   scanf("%d",&y);

   double result = pow(x,y);
   printf("%lf",result);
}
