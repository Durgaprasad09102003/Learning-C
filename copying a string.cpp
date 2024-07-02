#include<stdio.h>

int main()
{
	char str1[30],str2[30];
	int i;
	puts("enter a string");
	gets(str1);
	for(i=0;str1!='\0';i++)
	str2[i] = str1[i];
	str2[i]='\0';
	printf("%s",str1);
	printf("%s",str2);
return 0;

}
