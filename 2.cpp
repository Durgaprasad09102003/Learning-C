#include<stdio.h>
#include<conio.h>
int main()
{
	
	struct employee
	{
		int eno;
		char name[10];
		float salary;
		char dob[80];
	};
	
	struct employee e[50]
	
	int  n,i;
	printf("\n enter no of employees");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter %d employee details",i++);
		printf("\n enter  employee number");
		scanf("\n %d",&e[i].eno]);
		printf("\n enter employee name");
		scanf("\n %s",e[i].name);
		printf("\n enter employee salary");
		scanf("%f",&e[i].salary);
		printf("\n enter employee dob");
		scanf("\n %s",e[i]dob);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n the e.no is %d",e[i].eno);
		printf("\n the ename is %s",e[i].ename);
		printf("\n the e salary is %f",e[i].salary);
		printf("\n the e.dob is %s",e[i] dob);
	}
	
return 0;
}
