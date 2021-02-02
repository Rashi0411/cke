//pp006: Write a program to create an array of 10 integers,input the data and show all even numbers in given numbers.//
#include<stdio.h>
main(){
	int a[9],n,i ;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("All the even numbers are: ");
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}
/*Enter the number of elements: 10
Enter the elements in array: 1
2
3
4
5
6
7
8
9
10
All the even numbers are: 2 4 6 8 10*/
