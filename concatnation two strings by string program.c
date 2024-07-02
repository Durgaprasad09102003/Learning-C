#include<stdio.h>
#include<string.h>
void main()

{
    int len1,len2;

    char s1[100];
    char s2[100];


    printf("enter s1 \n");
    gets(s1);

    printf("enter s2 \n");
    gets(s2);

    strcat(s1,s2);
    printf("string after concatenation is %s",s1);


}
