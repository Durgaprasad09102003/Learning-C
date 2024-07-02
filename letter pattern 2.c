#include<stdio.h>
int main()
{
    int i,j,n;

    printf("enter the number to stop the series \n");
    scanf("%d",&n);

    for(i=n;1<=i;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c \t",j+64);
        }
        printf("\n");
    }

return 0;
}
