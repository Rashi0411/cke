#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int n,i;
    if(argc==n){   
        int l=atoi(argv[1]);
        for(i=2;i<=argc;i++){
            if(atoi(argv[i])>l)
                l=atoi(argv[i]);
        }
        printf("%d is greatest",l);
        return 0;
    }
    else{
        printf("Syntax is : l3 <num1> <num2> <num3>");
        return 1;
    }
}
