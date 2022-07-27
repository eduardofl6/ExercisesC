#include <stdio.h>
#define MAX 100

void reverse(char s[MAX]);
char v[MAX] = "Ola como vai 123";

main()
{

reverse(v);
printf("%s",v);
}

void reverse(char s[])
{
	static int b = 0, t = 0;
	static char h[MAX];
	
	if(s[b] != '\0')
	{
	h[b] = s[b++];
		reverse(s);
	}
	s[t++] = h[--b];
}
