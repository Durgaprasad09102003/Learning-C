#include<stdio.h>
#include<string.h>
void main()

{
    int i,len1,len2;

    char s1[100];
    char s2[100];


    printf("enter s1 \n");
    gets(s1);

    printf("enter s2 \n");
    gets(s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    for(i=0;i<=len2;i++)
    {
        s1[len1 + i] = s2[i];

    }


    printf("after concatnation is %s",s1);


}
