#include<stdio.h>
int main()
{
    int m,n,i,sum=0;

    printf("enter a starting number");
    scanf("%d",&m);

    printf("enter ending number");
    scanf("%d",&n);

    for(i=m;i<=n;i+=2)
    {
        if(m%2!=0)
        sum +=i;
    }

    for(i=m+1;i<=n;i+=2)
    {
        if(m%2==0)
        sum += i;
    }
    printf("sum of the odd numbers is %d",sum );

    return 0;
}
