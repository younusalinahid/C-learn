#include<stdio.h>
int main()
{
    int grade;
    printf("enter a number:");
    scanf("%d",&grade);
         if (grade>=80&&grade<=100)
   {
       printf("you got A+");
   }
else if (grade>=70&&grade<79)
  {
    printf("you got A");
  }
else if (grade>=60&&grade<69)
  {
      printf("you got A-");
  }
else if (grade>=50&&grade<59)
  {
      printf("you got B");
  }
else if (grade>=40&&grade<49)
  {
    printf("you got C");
  }
else if(grade<39&&grade>01)
  {
    printf("you are failed");
  }

    return 0;
}
