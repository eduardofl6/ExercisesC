#include <stdio.h>

#define MAX 100

void squeeze(char s[], char c[]);


main(){

char strf[MAX] = "eld";
char strn[MAX] = "Hello world";
	
squeeze(strn,strf);
}

void squeeze(char strn[], char strf[]){
int i,j,k;


for(k = 0; strf[k] != '\0';++k){
		
		for(i = j = 0;	strn[i] != '\0';++i){
			
				if(strn[i] != strf[k]){
					strn[j++] = strn[i];
				} 
		}
}		
	strn[j] = '\0';	
	
	printf("%s",strn);
}
