 #include<stdio.h>
// #define BITS sizeof(int)*8
 int main()
 {
 	int a,msb,BITS;
 	
 	printf("enter a number");
 	scanf("%d",&a);
	BITS = sizeof(int)*8;
	msb = 1<< (BITS - 1);
	
	if(a & msb)
	  printf("MSB of %d is set 1",a);
	else
	  printf("MSB of %d is set 0",a);
	  
return 0;  
}
