#include<stdio.h>
int main()
{
	int a,n,newnum;
	
	printf("enter a number");
	scanf("%d",&a);
	
	printf("enter nth bit of a number");
	scanf("%d",&n);
	
	newnum = a & (~(1<<n));
	
	printf("bit clear is sucessful");
	printf("number before clearing %d bit is %d",n,a);
	printf("number after clearing %dbit is %d",n,newnum);
	
return 0;
}
