#include <stdio.h>

char strcat(char *s, const char* t);

main()
{
char destination[] = "How are you ";

char *font = (char*) "Going?";
//(char*) just to inddicate that is a string constant, not a char array with letters

strcat(destination, font);

printf("%s",destination);
}

char strcat(char *s, const char* t)
{

int b = 0;
for(; *(s+b) != '\0';++b);


while ( ( *(s + (b++)) = *t++) != '\0');
}
