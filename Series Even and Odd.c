#include<stdio.h>
int main()
{
    int n, i,even=0,odd=0;
    printf("Enter the last number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even = even + i;

        else
            odd = odd + i;
    }
    printf("sum = %d\n",odd-even);


    getch();
}
