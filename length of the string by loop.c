#include<stdio.h>
void main()

{
    char name[30];

    int count=0,i=0;

    printf("enter a name \n");
    gets(name);

   for(i=0;name[i]!='\0';i++)
   {

       count++;

   }
    printf("the length of the string is %d",count);


}
