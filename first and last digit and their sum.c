#include<stdio.h>
void main()
{
    int n,l,f,sum=0,x;

    printf("enter the number");
    scanf("%d",&n);

    f = n;
     while(f >=10)
    {
        f = f/10;

    }

    l = n%10;

    printf("\n the first number is %d \n",f);
    printf("\n the last number is %d \n",l);

    sum = l+f;

    printf("\n the sum of first and last digit is %d \n",sum);



    x = f;
    f = l;
    l = x;

    printf("\n after swap \n");
    printf("\n the first number is %d \n",f);
    printf("\n the last number is %d \n",l);




}