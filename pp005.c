//pp005: Write a program to input two numbers and print all even numbers in given range.//
#include<stdio.h>
main(){
	int a,b;
	printf("Enter starting number: ");
	scanf("%d",&a);
	printf("Enter ending number: ");
	scanf("%d",&b);
	printf("All even numbers are: ");
	for(a;a<=b;a++){
		if(a%2==0)
			printf("%d ",a);
	}
}
/*Enter starting number: 2
Enter ending number: 9
All even numbers are: 2 4 6 8*/
