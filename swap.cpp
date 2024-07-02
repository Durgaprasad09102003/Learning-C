#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("a is %d",a);
	printf("b is %d",b);
	
return 0;
}
