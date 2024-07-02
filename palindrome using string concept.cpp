// write a C program to implement arithmetic operations

#include<stdio.h>
//#include<string.h>

int main()
{
    int a;
    char str1[20],str2[20];

    printf("enter the string ");
    scanf("%s", &str1);
    printf("the given string1 is %s\n", str1);

    strcpy(str2, str1);
    strrev(str2);

    printf("the reverse string1 is %s\n", str2);

    a=strcmp(str1,str2);

    if(a==0)
        printf("given string is a palindrome");
    else
        printf("given string is not a palindrome");



return 0;
}
