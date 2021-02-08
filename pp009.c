/*pp009: Write a program having a function iseven() which takes a number as input and returns 1 if the number is even
else returns 0.Create the main() function  to input a number and check it to be even or odd using iseven() function.*/
#include<stdio.h>
int iseven(int n){
	if(n%2==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int num;
	printf("Input a number: ");
	scanf("%d",&num);
	iseven(num)?printf("%d is even",num):printf("%d is odd",num);
	return 0;
}
/*Input a number: 43
43 is odd*/
