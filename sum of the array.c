#include<stdio.h>

int main()
{
    int a[1000],i,n,sum = 0;

    printf("enter size of array");
    scanf("%d",&n);

    printf("enter th elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    printf("sum = %d",sum);
}
