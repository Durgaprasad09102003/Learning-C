
#include<stdio.h>
int main()
{


char ch,str[50];
int i=0,wc=0;


printf("enter any string");

for(i=0;i<11;i++)
{
ch = getchar();
str[i]=ch;
if(ch==' ')
wc++;
}

str[i-1]='\0';
printf("given string is %s",str);
printf("\n enter number of words in the given string is %s ",str);

return 0;
}

