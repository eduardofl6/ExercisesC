#include <stdio.h>

char strncat(char *dest, const char* source,int stpoint);

main()
{
char destination[] = "abcd";
char *source = (char*) "efghijk";

strncat(destination,source,6);

printf("%s",destination);
}

char strncat(char *d, const char* s,int st)
{
	while(*(d++) != '\0');
	d--;
	
	while(*s != '\0' && st--)
	*d++ = *s++;
}
