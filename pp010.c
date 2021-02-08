/*pp010: Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 if the
number is even else returns 0.Write a program pp010.c, include the header file into it.Create the main() function  to 
input a number and check it to be even or odd using iseven() function.*/
#include"stdio.h"
#include"pp010.h"
int main(){
	int num;
	printf("Input a number: ");
	scanf("%d",&num);
	iseven(num)?printf("%d is even",num):printf("%d is odd",num);
}
/*Input a number: 5643896
5643896 is even*/
