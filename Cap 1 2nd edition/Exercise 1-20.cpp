#include <stdio.h>

#define MAXLINES 100
#define tab_lenght 8

main(){
	
int i, c;

while ((c = getchar()) != EOF){
	
	if(c == '\t'){
		for(int v; v <= tab_lenght;++v)
		putchar(' ');
	c = getchar();
	}
	
	putchar(c);
}

return 0;
}
