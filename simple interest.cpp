#include<stdio.h>
#include<conio.h>
int main()
{
	float P,T,R,SI;
	printf("enter P,T,R, values");
	scanf("%f%f%f",&P,&T,&R);
	SI = (P*T*R)/100;
	printf("the values of SI is %f",SI);
	getch();   return 0;
	}
