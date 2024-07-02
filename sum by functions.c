#include<stdio.h>
void fun(int,int);

void main()
{

    fun(5,6);

}
void fun(int x , int y )
{
    int sum =0;

    sum = x + y;

    printf("sum is %d",sum);
}
