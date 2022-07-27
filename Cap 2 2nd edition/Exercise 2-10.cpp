#include <stdio.h>
#define MAX 100
char lower(char f);

main ()
{
char f = getchar();
printf("%c",lower(f));
}

char lower (char f){
	char c;
return c = (f >= 'A' && f <= 'Z') ? f + 'a' - 'A' : f;
}
