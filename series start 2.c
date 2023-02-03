#include<stdio.h>
int main()
{
    int sum=0, n, a=1;
    printf("Enter the last digite of the series :");
    scanf("%d",&n);

    printf("1+2+3+......+%d",n);

    while(a<=n)
    {
        sum = sum + a;
        a = a + 1;
    }
    printf(" = %d\n",sum);

    getch();
}

