#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("enter the number to stop the series \n");
    scanf("%d",&n);


     for(i=1;i<=(n-1);i++)
    {
       for(k=1;k<=(n-i) && 1<=k;k++)
       {
           printf("\t");

       }
       for(j=1;j<=((2*i)-1) ;j++)
       {

           printf("* \t");

       }

       printf("\n");

    }

    for(i=n;1<=i;i--)
    {
       for(k=1;k<=(n-i) ;k++)
       {
           printf("\t");

       }
       for(j=1;j<=((2*i)-1) ;j++)
       {

           printf("* \t");

       }

       printf("\n");

    }

return 0;

}
