#include<stdio.h>
main(){
	int n,count=0,counter,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&counter);
		i=1;
		count=0;
		while(1)
		{
			if(i%3!=0 && i%10!=3)
			{
				count=count+1;
			  
			    if(count==counter)
			    {
				  printf("%d\n",i);
				  break;
			    }
	      }
	       i=i+1;
		}
		counter=counter-1;
	}
}
