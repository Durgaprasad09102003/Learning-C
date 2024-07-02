#include<stdio.h>
int main()
{
	int a,n,newnum;
	
	printf("enter a number");
	scanf("%d",&a);
	
	printf("enter nth bit to set (0-31)");
	scanf("%d",&n);
	
	newnum = (1<<n) | a;
	
	printf("\n bit set is sucessful");
	printf("\n number before setting %d bit %d",n,a);
	printf("\n number after setting %d bit %d",n,newnum);
	
	return 0;
	}
