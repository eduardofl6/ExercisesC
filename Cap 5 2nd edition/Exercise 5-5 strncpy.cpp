#include <stdio.h>

int strncmp(const char *str1, const char *strn2, int t);

main()
{
char A[] = "abd";
char B[] = "abc";


int retorno = strncmp(A,B,3);

if(retorno < 0)
	printf("str1 is less than str2");
else if (retorno > 0)
	printf("str2 is less than str1");
else 	
	printf("str2 is equal to str1");
}

int strncmp(const char *st1, const char *st2, int t)
{
int a = 0,b = 0;

for(int t1 = t;*st1 != '\0' && t1-- != 0;)
	a += *st1++;

for(int t1 = t;*st2 != '\0' && t1-- != 0;)
	b += *st2++;

if (a == b)
	return 0;

return (a < b) ? -1 : 1;
}
