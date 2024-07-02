#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char str1[30],str2[30],str3[30];
	printf("enter a string");
	gets(str1);
	printf("enter a string");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	    str3[i] = str2[j];
	for(j=0;str2[j]!='\0';j++)
	{
		str3[j] = str2[j];
		i++;
    }
		
	str3[i]='\0';
	puts(str3);
	return 0;
}
