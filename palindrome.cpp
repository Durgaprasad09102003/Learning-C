//write a C  program to check wheather the string  is palindrome or not

#include<stdio.h>
#include<string.h>
int main()
{

char str1[15],str2[15];
int i,j,l,flag;

printf("enter a string");
gets(str1);
l=strlen(str1);
for(i=0,j=l-1;str1[i]!='\0';i++,j--)
str2[j] = str1[i];
str2[j] ='\0';


printf("%s is the reverse of the given string\n",str2);
for(i=0;str1[i]!='\0';i++)
{
	if(str1[i]==str2[i])
	{i++;
	if(str1[i]=='\0')
	flag=1;
	}
	else
	flag=0;
}
if(flag==1)
printf("%s is the palindrome",str1);
else
printf("%s is not a palindrome",str2);

return 0;
}
