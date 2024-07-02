#include<stdio.h>

#include<string.h>
void main()
{
    char str1[100],str2[100],i;

    printf("enter a string 1 \n");
    gets(str1);

    strcpy(str2,str1);

    strrev(str1);

    i = strcmp(str1,str2);


    printf("the string reverse is %s \n ",str1);

    if(i==0)
    {
        printf("\n string is a palindrome");
    }

    else
    {
        printf("\n string is not a palindrome");
    }
}
