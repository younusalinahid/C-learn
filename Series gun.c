#include<stdio.h>
int main()
{
    int result=1,i,n;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result = result * i;
    }
    printf("result = %d\n",result);



    getch();
}
