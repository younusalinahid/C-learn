#include<stdio.h>
int main()
{
    char str1[15] = "Younus ali";
    char str2[15] = "Nahid";
    char temp[15];

    printf("Bepore swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swaping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    getch();
}
