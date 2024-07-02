#include<stdio.h>
int main()
{
    int a[100][100],m,n,i,j,sr=0,sc=0;

    printf("enter the no of of rows");
    scanf("%d",&m);

    printf("enter the no of columns");
    scanf("%d",&n);

    printf("enter the elements of the matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("the matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sr += a[i][j];
            sc += a[j][i];
        }
        printf("sr=%d,sc=%d \n ",sr,sc);

        sr=sc=0;
    }

return 0;
}
