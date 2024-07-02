#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	
	c = (a>b) ? a : b;
	
	printf("max value between %d and %d is %d",a,b,c);
	
return 0;
}
