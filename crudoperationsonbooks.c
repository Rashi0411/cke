typedef struct{
	int bookno;
	char title[51],author[51];
	float price;
}Book;

void addBook(){
	
}
void showAllBooks(){
	
}
void searchBook(){
	
}
void updateBook(){
	
}
void deleteBook(){
	
}
main(){
	int choice;
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
			case 6: exit(0);
			default: printf("Invalid Choice\n"); system("pause");
		}
	}
}


