#include<stdio.h>
int main()
{
    int sum=0, n, i;
    printf("Enter the last digite of the series :");
    scanf("%d",&n);

    printf("1+2+3+......+%d",n);

    for(i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    printf(" = %d\n",sum);



    getch();
}
