main(int argc, char *argv[]){
	if(argc!=3){
		 printf("Syntax: voter <name> <age>");
		 return 1;
    }
	else{
		char *name=argv[1];
		int age=atoi(argv[2]);
		if(age>=18)
			printf("Dear %s you can vote",name);
        else
			printf("Dear %s you cannot vote",name);
        }
    return 0;
}
