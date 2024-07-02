#include<stdio.h>
int main()
{
    int num,reverse = 0;

    printf("enter a number to find reverse");
    scanf("%d",&num);

    while (num != 0)
    {
    reverse = (reverse * 10) + (num % 10);

    num /= 10;

    }

    printf("reverse = %d", reverse);

    return 0;
}
