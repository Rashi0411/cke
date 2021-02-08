/*pp011: Create a project as pp011 having two files pp011-1.c having a function iseven() which takes a number as input
and returns 1 if the number is even else returns 0 and another file as pp011-2.c having the main() function to input a
number and check it to be even or odd using iseven() function.*/
int iseven(int n){
	if(n%2==0){
		return 1;
	}else{
		return 0;
	}
}
/*Input a number: 88
88 is even*/
