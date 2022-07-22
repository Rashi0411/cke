main()
{
	char str[100];
	printf("Enter a string : ");
	scanf("%[^$]",&str); //input multiline until $ is pressed
	printf("String is : %s",str);
}

