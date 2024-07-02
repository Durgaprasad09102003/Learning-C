#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[100];
    int i,n;

    printf("\n enter size of the array\n");
    scanf("%d",&n);

    printf("\n enter the elements of the arr1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

     printf("\n enter the elements of the arr2\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<n;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }


    printf("\n the elements in arr3 is");
    for(i=0;i<n;i++)
    {
        printf("\t %d",arr3[i]);
    }

return 0;

}
