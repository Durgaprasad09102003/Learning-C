#include<stdio.h>
int main()
{
	char name[30];
	int i,length=0;
	printf("enter a string");
	gets(name);
	for(i=0;name[i];i++)
	{
		length++;
	}
	printf("length of the string is %d",length);
	return 0;
	
}
