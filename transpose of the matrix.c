#include<stdio.h>
void main()
{
    int a[100][100],i,j;

    printf("enter the elements of the matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("the original matrix is \n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("the transpose of the matrix is \n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<2 ;j++)
        {
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }

}