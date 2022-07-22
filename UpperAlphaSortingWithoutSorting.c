#include<stdio.h>
main(){
    char s[]="ARTRTBBABRTARTRTR";
    int r[26]={0};
    int i=0,j;
    while(s[i]){
        r[s[i]-'A']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
      if(r[i]){
        for(j=0;j<r[i];j++)
          printf("%c",i+'A');
      }
    }
}

