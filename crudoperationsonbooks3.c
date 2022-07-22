#include<stdio.h>
enum {false,true
};
typedef struct{
	int bookno;
	char title[51],author[51];
	float price;
}Book;

FILE *fp;
Book b;

void addBook(){
	system("cls");
	printf("Book No : ");scanf("%d",&b.bookno);
	printf("Title : ");fflush(stdin);gets(b.title);
	printf("Author : ");fflush(stdin);gets(b.author);
	printf("Price : ");scanf("%f",&b.price);
	
	fseek(fp,0,SEEK_END); //set the file pointer to end of the file
	fwrite(&b,sizeof(b),1,fp); //write the record
	printf("Record Saved...\n");
	system("pause");
}
void showAllBooks(){
	system("cls");
	rewind(fp); //set file pointer to top of the file
	while(fread(&b,sizeof(b),1,fp)){
		printf("%10d %30s %20s %10.2f\n",b.bookno,b.title,b.author,b.price);
	}
	system("pause");
}
void searchBook(){
	int bookno,found=false;
	system("cls");
	printf("Book No to search : ");scanf("%d",&bookno);
	rewind(fp);
	while(fread(&b,sizeof(b),1,fp)){
		if(b.bookno==bookno){
			found=true;
			break;
		}
	}
	if(found)
		printf("Record founds as %d %s %s %f\n",b.bookno,b.title,b.author,b.price);
	else
		printf("Sorry! Record not found\n");
	system("pause");
}
void updateBook(){
	int bookno,found=false;
	system("cls");
	printf("Book No to update : ");scanf("%d",&bookno);
	rewind(fp);
	while(fread(&b,sizeof(b),1,fp)){
		if(b.bookno==bookno){
			found=true;
			break;
		}
	}
	if(found){
		system("cls");
		printf("Old title is %s, new title : ",b.title);fflush(stdin);gets(b.title);
		printf("Old author is %s, new author : ",b.author);fflush(stdin);gets(b.author);
		printf("Old Price is %.2f, new price : ",b.price);scanf("%f",&b.price);		
		fseek(fp,-sizeof(b),SEEK_CUR); //set the file pointer to start of searched record
		fwrite(&b,sizeof(b),1,fp); //update the current record
		printf("Record Updated...\n");
	}
	else
		printf("Sorry! Record not found\n");
	system("pause");
}
void deleteBook(){
	int bookno,found=false;
	system("cls");
	printf("Book No to delete : ");scanf("%d",&bookno);
	rewind(fp);
	while(fread(&b,sizeof(b),1,fp)){
		if(b.bookno==bookno){
			found=true;
			break;
		}
	}
	if(found){
		FILE *t=fopen("temp","wb");
		rewind(fp);
		while(fread(&b,sizeof(b),1,fp)){
			if(b.bookno!=bookno){
				fwrite(&b,sizeof(b),1,t);
			}
		}
		fclose(fp);
		fclose(t);
		remove("books");
		rename("temp","books");
		fp=fopen("books","rb+");
		
		printf("Record Deleted...\n");
	}
	else
		printf("Sorry! Record not found\n");
	system("pause");
}
main(){
	int choice;
	fp=fopen("books","rb+"); //open the file if exists
	if(fp==NULL) fp=fopen("books","wb+"); //create the file if not created yet
	for(;;){
		system("cls");
		printf("1: Add Book\n");
		printf("2: Show All Books\n");
		printf("3: Search a Book\n");
		printf("4: Update a Book\n");
		printf("5: Delete a Book\n");
		printf("6: Quit the Application\n");
		printf("Enter the choice : "); scanf("%d",&choice);
		switch(choice){
			case 1: addBook();break;
			case 2: showAllBooks();break;
			case 3: searchBook();break;
			case 4: updateBook();break;
			case 5: deleteBook();break;
			case 6: fclose(fp);exit(0); //close the file before exit
			default: printf("Invalid Choice\n"); system("pause");
		}
	}
}


