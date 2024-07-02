#include<stdio.h>
int main()
{
    int a,n,i,result = 1;

    printf("enter a number to get table of a number \n");
    scanf("%d",&a);

     printf("enter a number to stop the table \n");
    scanf("%d",&i);

    for(n = 1;n<=i;n++)
        {
        result = a * n;
        printf("\n %d * %d = %d",a,n,result);
        }

return 0;


}
