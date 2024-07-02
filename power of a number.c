#include<stdio.h>
int main()
{
    int i,base,power,solution = 1;


    printf("enter a base number");
    scanf("%d",&base);


    printf("enter the power of the base number");
    scanf("%d",&power);

    for(i = 1 ;i<=power;i++ )
    {
        solution *= base;


    }

    printf(" %d ^ %d = %d",base,power,solution);
return 0;

}
