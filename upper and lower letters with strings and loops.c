#include<stdio.h>

#include<string.h>
void main()
{
    char str[100];
    int i;

    printf("enter a string \n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {

        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
        printf("\n %s",str);

    for(i=0;str[i]!='\0';i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
        printf("\n %s \n",str);



        strlwr(str);
        puts(str);


        strupr(str);
        puts(str);


}
