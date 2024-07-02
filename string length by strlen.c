#include<stdio.h>
void main()

{
    char name[30];

    int count=0;

    printf("enter a name \n");
    gets(name);

     count =   strlen(name);

     printf("the length of the string %d",count);



}
