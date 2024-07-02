#include<stdio.h>
main(){
	int a,x;
	scanf("%d",&a);
	if (a%2==0 && a>2){
		printf("YES\n");
		/*x=a/2;
		if(x%2==0){
			printf("%d %d",x,x);
		}
		else{
			printf("%d %d",(x-1),(x+1));
		}*/
	}
	else{
		printf("NO");
	}
	
}
