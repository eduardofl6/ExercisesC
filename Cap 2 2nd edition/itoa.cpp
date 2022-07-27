#include <stdio.h>
#include <string.h>
#define MAX 100

void itoa(int n, char s[]);

main()
{
int n = 132;
char s[MAX];

for (int i = 0; i <= MAX;++i){
	s[i] = 0;
}
itoa(n, s);
}

void itoa(int n, char s[])
{
	int i = 0, sign;

	if ((sign = n) < 0	)
		n = -n;
	
	do{
	
		s[i++] = n % 10 + '0';
			printf("|%c|",s[i-1]);
	}while((n /= 10) > 0);
	
	if (sign < 0)
		s[i++] ='-';
	
	s[i] = '\0';
strrev(s);
	printf("%s",s);
}
