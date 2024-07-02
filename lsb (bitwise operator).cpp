#include<stdio.h.>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);

if(a&1)
printf("lsb of %d is set 1",a);
else
printf("lsb of %d is unset 0",a);

return 0;
}
