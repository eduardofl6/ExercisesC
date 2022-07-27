#include <stdio.h>

int main(){
	int c, nl,tb,bk;

nl = 0, tb = 0, bk = 0;


while ((c = getchar()) != EOF){
	if ( c == '\t')
		++tb;else
	if (c == '\n')
		++nl;else
	if (c == ' ')
		++bk;
}


printf("|Newline: %d\n|Tab: %d\n|Blank: %d\n",nl,tb,bk);
return 0;
}
