#include<stdio.h>
struct Book{
 int bookno;
 char title[51], author[51];
 float price;
};
main(){
 struct Book b;
 printf("Book No : ");scanf("%d",&b.bookno);
 printf("Title : ");fflush(stdin);gets(b.title);
 printf("Author : ");fflush(stdin);gets(b.author);
 printf("Price : ");scanf("%f",&b.price);
 printf("%d %s %s %f",b.bookno,b.title,b.author,b.price);
 }
