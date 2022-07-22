#include<stdio.h>
struct employee{
	int empid;
	char name[51];
	float salary;
};
main(){
	struct employee *e=malloc(sizeof(struct employee));
	
	printf("Employee ID : ");scanf("%d",&e->empid);
	printf("Name : ");fflush(stdin);gets(e->name);
	printf("Salary : ");scanf("%f",&e->salary);
	
	printf("Employee Info is %d %s %f",e->empid,e->name,e->salary);
}

