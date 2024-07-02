#include<stdio.h>

void fun(int , int);
void main()
{
    int sum =0;
    fun(5,6);
    printf("sum = %d",sum);
}

void fun(int x,int y)
{

    int sum=0;
    sum = x+y;
    printf("sum is %d",sum);


}
