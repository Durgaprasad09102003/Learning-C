#include<stdio.h>
int main()
{
	int a,n,bitstatus;
	
	printf("enter a number");
	scanf("%d",&a);
	
	printf("enter nth bit to check(0-31)");
	scanf("%d",&n);
	
	bitstatus = (a>>n) & 1;
	printf("%dth bit is set to %d ",n,bitstatus);	
	return 0;
	
	}
