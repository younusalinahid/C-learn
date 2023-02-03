#include<stdio.h>
int main()
{
     int num[] = {10,30,24,15,22};

     int value,pos=-1,i;

     printf("Enter the value you want to search : ");
     scanf("%d",&value);

     for(i=0; i<7; i++)
     {
         if(value==num[i])
         {
             pos = i+1;
             break;
         }
     }
     if(pos==-1)
     {
         printf("Item is not found");

     }
     else {
        printf("The value is found at position %d",pos);
     }


     getch();
}
