int main(int argc, char *argv[]){
if(argc==1){
	printf("Syntax is : mydel <files to delete>");
	return 1;
}
else{
	int i,result;
	for(i=1;i<argc;i++){
			result=remove(argv[i]);
			if(result)
			printf("Unable to delete file %s\n",argv[i]);
			else
			printf("File %s Deleted\n",argv[i]);
        }
	return 0;
	}
}
