#include<stdio.h>
main(){
    char s[]="221120011200";
    int r[10]={0};
    int i=0,j;
    while(s[i]){
        r[s[i]-'0']++;//'6'-'0'=6
        i++;
    }
    for(i=0;i<10;i++)
    {
      if(r[i]){
        for(j=0;j<r[i];j++)
          printf("%d",i);
      }
    }
}

