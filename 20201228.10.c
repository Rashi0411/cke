#include<stdio.h>
main(){
	int rollno;
	char name[100],gender,course[100];
	float fees;
	
	printf("Roll No : ");scanf("%d",&rollno);
	printf("Name : ");fflush(stdin);gets(name);
	printf("Gender : ");fflush(stdin);gender=getchar();
	printf("Course : ");fflush(stdin);gets(course);
	printf("Fees : ");fflush(stdin);scanf("%f",&fees);
	
	printf("%d %s %c %s %.2f",rollno,name,gender,course,fees);
}


