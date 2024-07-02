//sum of two numbers by using functions:
#include<stdio.h>
void sum(void);
void sum()
{
    int a,b,sum=0;
    printf("enter the a and b values");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("the sum of two numbers is %d",sum);
}

void main()
{
    sum();
}
