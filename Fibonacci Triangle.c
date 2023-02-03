#include<stdio.h>
int main()
{
    int n, row, col, a=0, b=1, c, i;
    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {

            printf("%d  ",col);
        }
        printf("\n");
    }




    getch();

}


