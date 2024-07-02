#include<stdio.h>
main(){
	int unsol=0,x=0,i,n,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&y);
		if(y>0){
			x=x+y;
		}
		else{
			if(x>0){
				x=x-1;
			}
			else{
				unsol=unsol+1;
			}
		}
		
	}
	printf("%d",unsol);
	return 0;
}
