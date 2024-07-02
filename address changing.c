#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};

    int *p,n,m;

    p = &a[2];

    printf("enter the n value for addition \t");
    scanf("%d",&n);
    printf("address of the  element is %d \n",p);
    printf(" element is %d",*p);
    p = p+n;

    printf("new address is %d \n",p);

     printf("new element is %d \n",*p);


     printf("enter m value for subraction \t");
     scanf("%d",&m);

     p = p-m;

     printf("new address is %d \n ",p);

     printf("new element is %d",*p);


return 0;
}
