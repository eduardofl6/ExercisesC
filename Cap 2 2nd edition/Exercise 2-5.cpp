#include <stdio.h>

#define MAX 100

void any(char s1[], char s2[]);

main(){
	char s1[MAX] = "ola";
	char s2[MAX] = "a";
	
any(s1,s2);
	
}

void any(char s1[], char s2[]){
int i,j,min = MAX,actual = MAX;


for( i =  0; s1[i] != '\0';++i){

	for(j = 0; s2[j]; ++j){
	
		if(s1[i] == s2[j])
				actual = i + 1;
		}

if (actual < min)
	min = actual;
}
	
	printf("%d",min);
}
