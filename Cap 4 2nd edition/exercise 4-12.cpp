#include <stdio.h>
#include <string.h>
#define MAX 100

void itoa(int n);
void printd(int n);
char s[MAX];

main()
{
int n = 132;

for (int i = 0; i <= MAX;++i){
	s[i] = 0;
}	
itoa(n);
printf("|%s|",s);
printf("");
}

 int i = 0;

void itoa(int v)
{
	
	if(v < 0)
		{
			putchar('-');
			v = -v;
		}
	
	if(v / 10)	
		itoa(v / 10);
	s[i++] = v % 10 + '0';
	
}

