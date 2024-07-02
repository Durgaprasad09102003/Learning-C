#include<stdio.h>

int sum(int , int);
void main()
{
    int c;
    c = sum(5,6);
    printf("sum = %d",c);
}

int sum(int x,int y)
{

    int sum=0;
    sum = x+y;
    printf("sum is %d",sum);

    return sum,x;
    printf("bye");
}
