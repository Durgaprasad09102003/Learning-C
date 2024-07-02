#include<stdio.h>
int main()
{

    int mat1[100][100],mat2[100][100],mat3[100][100],m,n,k,p,q,i,j,sum = 0;

     printf("enter the no of rows for mat1 \n ");
    scanf("\n %d",&m);

    printf("enter the no of columns for mat1 \n");
    scanf("\n %d",&n);

     printf("enter the no of rows for mat2 \n ");
    scanf("\n %d",&p);

    printf("enter the no of coloumns for mat2 \n");
    scanf("\n %d",&q);

    printf("enter the elements of mat1 \n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("\n %d",&mat1[i][j]);

        }
    }

    printf("enter the elements of mat2 \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("\n %d",&mat2[i][j]);
        }
    }

    printf("the mat1 is \n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

            printf("%d \t",mat1[i][j]);
        }
        printf(" \n");
    }

    printf("the mat2 is\n");

    for(i=0;i<p;i++)
    {

        for(j=0;j<q;j++)
        {

            printf("%d \t",mat2[i][j]);

        }
        printf("\n");
    }
    if(n == p)
    {

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum = 0;
                for(k=0;k<p || k<n;k++)
                {


                sum += (mat1[i][k] * mat2[k][j]);

                }
                     mat3[i][j] = sum;
            }

        }

        printf("the mat3 is \n");
         for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
            printf("%d \t",mat3[i][j]);
            }
            printf("\n");

        }

    }

    else
    {
    printf("matrix multiplication is invalid");
    }



return 0;

}
