#include<stdio.h>
int main()
{
        int i,n,j;

        printf("enter a number to stop the series \n");
        scanf("%d",&n);
        printf("\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
            printf("* \t");
            }
            printf("\n");
        }

        return 0;
}
