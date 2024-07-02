#include<stdio.h>
#define x 1000

int main()
{
    int a[x],i,n;

    printf("enter size of array");
    scanf("%d",n);

    printf("enter %d elements in array ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    printf("\n elements in array are");
   for(i=0;i<n;i++)
  {
        printf("%d",a[i]);

    }

    return 0;


}
