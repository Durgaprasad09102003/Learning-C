#include<stdio.h>

void fun(int *, int *);
void main()
{
    int x=5,y=6;

    fun(&x,&y);

    printf("x =%d,y=%d",x,y);

}

void fun(int* x,int* y )
{
    *x = 6;
    *y = 5;
    printf("x =%d,y=%d",*x,*y);
}
