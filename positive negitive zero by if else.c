#include<stdio.h>
int main()
{
    int a;

    printf("enter a number");
    scanf("%d",&a);

    if (a>=0)
    {
    if(a>0)
    {
    printf("%d is a positive number",a);
     }
        else
        {
        printf("%d is neither positive nor negitive",a);
        }
    }
    else
    {
    printf("%d is a negitive number",a);
    }

    return 0;
}
