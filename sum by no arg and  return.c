#include<stdio.h>

int sum(void);
void main()
{
    int c;
    c = sum();
    printf("sum = %d",c);
}

int sum()
{

    int x=3,y=4,sum=0;
    sum = x+y;
    printf("sum is %d",sum);

    return sum,x;
    printf("bye");
}
