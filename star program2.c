#include<stdio.h>
int main()
{
        int i,n,j;

        printf("enter a number to stop the series \n");
        scanf("%d",&n);
        printf("\n");
        for(i=n;i>=1;i--)
        {
            for(j=i;j>=1;j--)
            {
            printf("* \t");
            }
            printf("\n");
        }

        return 0;
}
