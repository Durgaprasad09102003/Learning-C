#include<stdio.h>
int main()
{
int month;

printf("enter a month number");
scanf("%d",&month);

    if(month == 1)
    printf("31days");
    else if(month == 2)
    printf("28days");
    else if(month == 3)
    printf("31days");
    else if(month == 4)
    printf("30days");
    else if(month == 5)
    printf("31days");
    else if(month == 6)
    printf("30days");
    else if(month == 7)
    printf("31days");
    else if(month == 8)
    printf("31days");
    else if(month == 9)
    printf("30days");
    else if(month == 10)
    printf("31days");
    else if(month == 11)
    printf("30days");
    else if(month == 12)
    printf("31days");

else
printf("invalid input! please enter  month number between (1-12)");

return 0;

}
