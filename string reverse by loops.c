#include<stdio.h>
#define X 100
void main()
{
    char str1[X],str2[X],str3[X],str4[X];
    int length=0,i=0,m=0;
    printf("\n enter a string 1 \n ");
    gets(str1);

    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }

    printf("\n the length of the string is %d \n ",length);

    for(i=0;i<=length;i++)
    {
    str2[i] = str1[i];
    }


    puts(str2);

    for(i=0,m=0;i<length;i++,m++)
    {
        str3[m] = str1[length-(i+1)];

    str4[i] = str3[m];

    }

    str4[length] = '\0';



    printf("\n the string reverse is %s \n ",str4);


    if(str2[i] == str4[i])
    {
        printf("\n given string is palindrome");

    }
    else
    {
        printf("given string is not a palindrome");

    }




}
