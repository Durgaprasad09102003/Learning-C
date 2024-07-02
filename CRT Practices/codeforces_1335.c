#include<stdio.h>
main(){
	int n,i,choco;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&choco);
		if(choco==0 || choco==1)//if no.of chocolates are 1 or 0
		{
			printf("0\n");
		}
		else if(choco%2==0)//if no.of chocolates are even
		{
			printf("%d\n",(choco/2)-1);
		}
		else//if no.of chocolates are odd
		{
			
			printf("%d\n",choco/2);
		}
	}
	return 0;
}
