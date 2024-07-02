#include<stdio.h>
main(){
	int years=0,a,b;
	scanf("%d %d",&a,&b);
	while(a<=b){
		years=years+1;
		a=a*3;
		b=b*2;
	}
	printf("%d",years);
	return 0;
}
