//pp003: Write a program to input a number and check it to be even or odd using bitwise operator.//
#include<stdio.h>
main(){
{
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    (n & 1 == 1) ?printf("%d is an Odd Number.", n) :printf("%d is an Even Number.",n) ;
    printf("\n");
    return 0;   
}
}
/*
Input a number: 98
98 is an Even Number.
*/
