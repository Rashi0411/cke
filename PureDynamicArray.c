#include<stdio.h>
#include<malloc.h>
main(){
	int *p=(int *)malloc(sizeof(int));
	int i=0,n,j;
	printf("Enter few numbers(-999 to quit):");
	for(;;){
		scanf("%d",&n);
		if(n==-999) break;
		p[i]=n;
		i++;  
		realloc(p,(i+1)*sizeof(int));
	}
	
	printf("Total values are: ");
	for(j=0;j<i;j++)
		printf("%d ",p[j]);
	free(p);
}
