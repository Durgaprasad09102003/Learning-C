#include<stdio.h>
int main()
{
    int a[10];
    int n,i,odd=0,even=0;
    printf("enter size of array");
    scanf("\n %d",&n);

    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("\n %d",&a[i]);
    }

    printf("the elements that you entered is");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }

    for(i=0;i<n;i++)
    {

        if(a[i]%2 == 0)
        {
            even += 1;
        }

        else
        {
            odd += 1;
        }

    }
    printf("\n the no of even numbers is %d",even);
    printf("\n the no of odd numbers is %d",odd);

return 0;
}
