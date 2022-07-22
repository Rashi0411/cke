#include<stdio.h>
typedef struct{
	int bookno;
	char title[51], author[51];
	float price;
}Book;
void drawLine(){
	int n;
	for(n=1;n<=80;n++) printf("%c",196);
	printf("\n");
}
main(){
	Book b[3];
	int i; float sum=0;
	for(i=0;i<3;i++){
		printf("Enter data of book #%d\n",i+1);
		printf("Book No : ");scanf("%d",&b[i].bookno);
		printf("Title : ");fflush(stdin);gets(b[i].title);
		printf("Author : ");fflush(stdin);gets(b[i].author);
		printf("Price : ");scanf("%f",&b[i].price);
	}
	system("cls");
	printf("%10s %10s %-20s %-20s %10s\n","S.No","Book No","Title","Author","Price");
	drawLine();
	for(i=0;i<3;i++){
		printf("%10d %10d %-20s %-20s %10.2f\n",i+1, b[i].bookno,b[i].title,b[i].author,b[i].price);
		sum=sum+b[i].price;
	}
	drawLine();
	printf("%-63s %10.2f\n","Total price of books",sum);
	drawLine();
}

