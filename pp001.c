//pp001: Write a program to input a number and check it to be even or odd using if statement.
main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
}


/*
Enter a number : 5
5 is odd
*/

