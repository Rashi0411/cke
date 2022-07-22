#include<stdio.h>
typedef struct{
	int day,month,year;
}date;

typedef struct{
	int empid;
	char name[51];
	float salary;
	date dob,doj; //structure within another structure
}employee;
void main(){
	employee e;
	printf("Employee ID : ");scanf("%d",&e.empid);
	printf("Name : ");fflush(stdin);gets(e.name);
	printf("Salary : ");scanf("%f",&e.salary);
	printf("Date of Birth (dd-mm-yyyy) : ");scanf("%d%*c%d%*c%d",&e.dob.day,&e.dob.month,&e.dob.year);
	printf("Date of Joining (dd-mm-yyyy) : ");scanf("%d%*c%d%*c%d",&e.doj.day,&e.doj.month,&e.doj.year);
	
	printf("%d %s %f %d-%d-%d %d-%d-%d",e.empid,e.name,e.salary,e.dob.day,e.dob.month,e.dob.year,e.doj.day,
	e.doj.month,e.doj.year);
}

