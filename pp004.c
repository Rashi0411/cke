/*pp004: Write a program to input a number and check it to be even or odd without using any arithmetic,relational, 
logical or bitwise operator.*/
struct number{
	unsigned n:1;
}; 
main(){
	int num;
	struct number x;
	printf("Enter a number: ");scanf("%d",&num);
	x.n=num;
	if(x.n)
		printf("%d is odd",num);
	else
		printf("%d is even",num);	
}
/*
Enter a number: 998
998 is even
*/
