main(){
	char str[100],temp[100];
	printf("Enter a string : ");
	gets(str);
	strcpy(temp,str);
	printf("Reverse of %s is %s\n",str,strrev(temp));
	strcpy(temp,str);
	printf("Upper case of %s is %s\n",str,strupr(temp));
	printf("Lower case of %s is %s\n",str,strlwr(temp));
	printf("Length of %s is %d",str,strlen(str));
}

