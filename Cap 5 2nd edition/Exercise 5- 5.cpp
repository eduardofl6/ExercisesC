#include <stdio.h>
#define SIZE 100

char  strncpy(char *destination, const char* content, int start);

main()
{
char destination[SIZE] = "123456789";
char *cont = (char*) "|";

strncpy(destination,cont,4);

printf("%s",destination);
}

char  strncpy(char *ds, const char* c, int st)
{
while(*c != '\0')
	*((ds++)+st-1) = *c++;	

ds += st-1;

while(*ds != '\0')
	*ds++ = '\0';
}
