#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the value to stop the series \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)
        {

            printf("\t");
        }

        for(j=1;j<=i;j++)
        {
            printf("* \t\t");
        }

        printf("\n");

    }

return 0;
}

