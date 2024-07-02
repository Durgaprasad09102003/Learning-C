#include<stdio.h>
main(){
	int steps=0,dis,x=1;
	scanf("%d",&dis);
		if(dis%5!=0)
		{
			steps=(dis/5)+1;
			printf("%d",steps);
	   }
	   else{
	   	  printf("%d",dis/5);
	   }
	   return 0;
	   
		
}
