//Write two functions that takes a number as an argument and returns the sum of its digits and factorial.
#include<stdio.h>
int getSum(int n){
	int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int factorial(int num){
    int i,fact = 1;
	for (i = 1; i <= num; i++)
   		fact = fact * i;
 		return fact;
}
int main(){
	int n,num;
	printf("Enter the numbers: ");
	scanf("%d%d",&n,&num);
	printf("Sum of the number is %d\n",getSum(n));
	printf("Factorial of the number is %d",factorial(num));
}
