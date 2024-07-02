#include<stdio.h>
int main()
{
    int i,start,end,sum=0;

    printf("enter the lower limit");
    scanf("%d",&start);

    printf("enter upper limit");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        sum += i;

        }

        printf("the sum of natural numbers from %d to %d is %d",start,end,sum);

return 0;
}
