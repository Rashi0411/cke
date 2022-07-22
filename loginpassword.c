#include<string.h>
#include<stdio.h>
main(){
	char userid[100],password[100];
	int i=0;
	char ch;
	printf("Enter User ID : ");
	gets(userid);
	printf("Enter Password : ");
	while(i<99){
		ch=getch();
		if (ch=='\r') break;
		password[i]=ch;
		putchar('*');
		i++;
	}
	password[i]='\0';
	if(strcmp(userid,"abes")==0 && strcmp(password,"123456")==0)
		printf("\nSuccess");
	else
		printf("Failure");
}

