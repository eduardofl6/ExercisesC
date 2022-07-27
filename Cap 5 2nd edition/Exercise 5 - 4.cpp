#include <stdio.h>

int strend(char *s, const char* t);

main()
{
char situation[] = "Hello How are you going";

char *t = (char*) "you going";

if(strend(situation,t) > 0)
	printf("Happen");
else
	printf("Doesn't happen!");
}

int strend(char *s, const char* t)
{

int b = 0,v = 0;

while(*(s+(b++)) != '\0');

while(*(t+(v++)) != '\0');

printf("%d|%d",b-2,v-2);

while(*(s+(--b)) == *(t+(--v)))
{
	if (*s == '\0')
		return 0;
}

if(v < 0)
return 1;
}
