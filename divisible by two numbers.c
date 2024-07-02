#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n enter a number");
    scanf("\n %d",&a);

    printf("\n enter two numbers that should divide that number");
    scanf("\n %d%d",&b,&c);

    if((a%b == 0)&&(a%c == 0))
    {
    printf("\n %d is divisible by %d and %d",a,b,c);
    }
    else
    {
    printf("\n %d is not divisible by %d and %d",a,b,c);
    }

    return 0;
}
