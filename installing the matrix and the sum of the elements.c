#include<stdio.h>
int main()
{
    int a[100][100],m,n,i,j,sum=0;

    printf("enter hoe many rows do you want \t");
    scanf("%d",&m);

    printf("enter how many coloumns do you want \t");
    scanf("%d",&n);

    printf("enter the element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
            sum += a[i][j];
        }
    printf("\n");
    }

    printf("the sum of all elements is %d",sum);

return 0;
}
