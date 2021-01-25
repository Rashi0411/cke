//pp002: Write a program to input a number and check it to be even or odd using switch statement.//
#include<stdio.h>
main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	switch(n%2){
		case 0: printf("%d is even",n);break;
		case 1: printf("%d is odd",n);break;		
	}
	
}
/*
Enter a number: 23
23 is odd
*/
