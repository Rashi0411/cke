//pp008: Write a program to input few numbers from command line and print all even numbers from given set of numbers.//
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i;
	for(i=1;i<argc;i++){
		if(atoi(argv[i])%2==0)
		printf("%d is even \n",atoi(argv[i]));
	}
	return 0;	
}
/*C:\Users\rashi\Documents\Practice Problem CKE>pp008.c

C:\Users\rashi\Documents\Practice Problem CKE>pp008 439 562 44 5 67 82
562 is even
44 is even
82 is even*/
