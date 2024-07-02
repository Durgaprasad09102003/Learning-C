#include<stdio.h>
int main()
{
       int i,n;
        printf("enter a number  \n");
        scanf("%d",&n);
        printf("\n");



    for(i=1;i<n;i++)
    {

      if(n == i*i*i)
      {
          printf("%d",i);
      }

    }




        return 0;
}
