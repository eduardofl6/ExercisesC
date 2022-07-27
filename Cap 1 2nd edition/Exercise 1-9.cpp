#include <stdio.h>

int main(){
	int c,d;




while ((c = getchar()) != EOF){
	
	if (c == ' ' && d == ' ')
		c = getchar();
	
	putchar(c);
	
		d = c;
}



return 0;
}
