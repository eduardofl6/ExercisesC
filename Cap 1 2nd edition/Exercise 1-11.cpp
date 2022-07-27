#include <stdio.h>

main()
{
int c,nw,nl,nc;

nw = nl = nc = 0;

while ((c = getchar()) != EOF){
	++nc;
	
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		putchar(c);
	else putchar('\n');
}
	
	
	
	
}
