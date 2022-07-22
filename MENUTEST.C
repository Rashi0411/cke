#include<process.h>
#include<conio.h>
#include<stdio.h>
main(){
	char choice;
	clrscr();
	for(;;){
		textcolor(RED+BLINK);textbackground(YELLOW);
		gotoxy(30,3); cprintf(">>>>> Main Menu <<<<<");
		textcolor(RED);textbackground(BLACK);
		gotoxy(30,5); cprintf("S");printf("entence Case");
		gotoxy(30,7); cprintf("L");printf("ower Case");
		gotoxy(30,9); cprintf("U");printf("pper Case");
		gotoxy(30,11); cprintf("C");printf("apitalize Each Word");
		gotoxy(30,13); cprintf("t");printf("OGGLE cASE");
		gotoxy(30,15); cprintf("Q");printf("uit");
		gotoxy(30,22); printf("Choice can be from s,S,l,L,u,U,c,C,t,T,q,Q");
		gotoxy(45,20);clreol();
		gotoxy(30,20); printf("Enter choice : ");
		fflush(stdin);
		textcolor(WHITE);
		choice=tolower(getchar());
		switch(choice){
			case 's': break;
			case 'l': break;
			case 'u': break;
			case 'c': break;
			case 't': break;
			case 'q': exit(0);
			default:
			gotoxy(30,22);
			printf("Sorry! Invalid Choice");
			system("pause");
		}
	}

}