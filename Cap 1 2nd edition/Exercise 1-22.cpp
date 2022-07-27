#include <stdio.h>

#define MAXLINES 1000
#define MAX 20

main(){
int count,c,z;

count = 0;

while ((c = getchar()) != EOF){
	++count;
	
	if (count >= MAX && z == ' '){

	putchar('\n');

	count = 0;
		}
		z = c;
	putchar(c);
	}
}
