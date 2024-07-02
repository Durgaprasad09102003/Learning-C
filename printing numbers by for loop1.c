#include<stdio.h>
int main()
{
    int i,n;
     printf("enter last number to stop the loop");
     scanf("%d",&n);

     printf("printing the numbers from 1 to %d",n);

     for(i=1;i<=n;i++)
     {
     printf("\n %d",i);
     }
return 0;
}
