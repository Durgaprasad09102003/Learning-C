#include<stdio.h>
int main()
{
	int a,b,c,d;
	
	printf("enter a,b,c numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	d = ((a>b) && (a>c)) ? a : (b>c) ? b : c;
	
	printf("max no is %d",d);
	
return 0;
}
