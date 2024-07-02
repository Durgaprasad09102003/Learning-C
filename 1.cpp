#include<stdio.h>
int main()
{
	struct student
	{
		int rno;
		char name[10];
		char fname[10];
		float percentage;
	};
	struct student S1,S2;
	printf("\n enter S1 details");
	scanf("\n %d",&S1.rno);
	scanf("\n %s",S1.name);
	scanf("\n %s",S1.fname);
	scanf("\n %f",&S1.percentage);
	
	printf("\n student details are");
	printf("\n roll no is %d",S1.rno);
	printf("\n stdent name is %s",S1.name);
	printf("\n father name is %s",S1.fname);
	printf("\n percetage is %f",S1.percentage);
	
	
	printf("\n enter S2 details");
	scanf("\n %d",&S2.rno);
	scanf("\n %s",S2.name);
	scanf("\n %s",S2.fname);
	scanf("\n %f",&S2.percentage);
	
	printf("\n student details are");
	printf("\n roll no id %d",S2.rno);
	printf("\n student name is %s",S2.name);
	printf("\n father name is %s",S2.fname);
	printf("\n percetage is %f",S2.percentage);
	
return 0;
}
