#include<stdio.h>
int main()
{
	int a,n,newnum;
	
	printf("enter a number");
	scanf("%d",&a);
	
	printf("number of nth bit to toggle");
	scanf("%d",&n);
	
	newnum = (a ^ (1<<n));
	printf("toggled successfully");
	printf("number before toggle %d bit is %d",n,a);
	printf("number after toggled %d bit is %d",n,newnum);
	
return 0;
	
	
}
