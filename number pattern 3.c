#include<stdio.h>
int main()
{
        int i,n,j,x=1;

        printf("enter a number to stop the series line\n");
        scanf("%d",&n);
        printf("\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
            printf("%d \t",x);
            x++;
            }
            printf("\n");
        }

        return 0;
}
