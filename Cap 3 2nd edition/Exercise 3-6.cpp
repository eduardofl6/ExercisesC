#include <stdio.h>
#include <string.h>
#define MAX 100

int itoa(int av,int n,char s[]);

main(void)
{

	char s[MAX];
	int n = 123, a = 5;
	
	itoa(a,n,s);
}

int itoa(int av,int n,char s[])
{
	int i = 0, sign, h = 0,b = 0;

	while(b <= MAX)
		s[b++] = 0;
		
	if ((sign = n) < 0	)
		n = -n;
	
	do{
	
		s[i++] = n % 10 + '0';

	}while((n /= 10) > 0);

	for(;i < av;++i)
		s[i] = '#';
		
	if (sign < 0)
		s[i++] ='-';

	s[++i] = '\0';
strrev(s);
	printf("%s",s);
}
