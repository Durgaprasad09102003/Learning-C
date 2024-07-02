#include<stdio.h>
void main()
{
    int num,count=0;

    printf("enter the number");
    scanf("%d",&num);

   while(num !=0)
   {
       num /= 10;

       count ++;

   }

    printf("the no of digits is %d",count);

}
