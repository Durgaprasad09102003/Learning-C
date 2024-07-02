#include<stdio.h>
int main()
{
    int mat1[100][100],mat2[100][100],mat3[100][100],i,j,m,n;

    printf("enter no of rows\n");
    scanf("%d",&m);

    printf("enter no of coloumns\n");
    scanf("%d",&n);

    printf("enter the elements of mat1 \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("enter the elements of mat2 \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("the matrix 3 is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d \t",mat3[i][j]);
        }
        printf("\n");
    }

return 0;
}
