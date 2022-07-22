#include<ctype.h>
#include<stdio.h>
main(){
	char choice;
	for(;;){
		system("cls");
		printf("1: Date\n2: Time\n3: Calcular\n4: Notepad\n5: Exit\nEnter your choice : ");
		fflush(stdin);
		choice=tolower(getchar());
		switch(choice){
			case '1': case 'd': system("date");break;
			case '2': case 't': system("time");break;
			case '3': case 'c': system("calc");break;
			case '4': case 'n': system("notepad");break;
			case '5': case 'e': exit(0);
			default: printf("Invalid Choice\n");system("pause");
		}
	}
}

