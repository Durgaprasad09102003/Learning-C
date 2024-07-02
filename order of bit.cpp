#include<stdio.h>
int main()
{
	int a,order = -1,i,intsize;
	
	printf("enter a number");
	scanf("%d",&a);
	intsize = sizeof(int)*8;
    for(i=0 ; i<intsize ; i++)
	{
		if((a>>i) & 1)
		order = i;
	}	
	
	if(order != -1)
	printf("HIGHTEST order set bit in %d is %d",a,order);
	else
	printf("0 has no set bit");

return 0;	
}
