#include <stdio.h>

main(){
char c;
int b = true;

for(int i = 0; b == true;++i){
		if ( i > 1000-1)
			b = false;
			 if ((c = getchar()) == EOF)
				b = false;
					if(c == '\n')
						b = false;
		putchar(c);
		
	}
}
