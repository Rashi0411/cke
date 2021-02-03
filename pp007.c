//pp007:Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.//
#include<stdio.h>
main(){
	int n;
	printf("Input a number: ");
	scanf("%d",&n);
	while(n!=0){
		if(n%2==0){
		 	printf("Number is even");
		}
		else{
			printf("Number is odd");		
		}
		scanf("%d",&n);
	}
	printf("exit");
}
/*Input a number: 43
Number is odd
56
Number is even
67
Number is odd
34
Number is even
0
exit*/
