#include<stdio.h>
main(){
	int arr[1000][1000],i,j,res=0,n,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1){
				x=x+1;
			}
		}
		if(x>=2){
			res=res+1;
		}
		x=0;
	}
	printf("%d",res);
	return 0;
	
}
