#include <stdio.h>
#include <string.h>
#define MAX 100

int itoa(int n,char s[],int t);

main()
{
	int n = 132;
	char s[MAX];
	int ABC = 10;


	for (int i = 0; i <= MAX;++i)
		{
		s[i] = 0;
		}
	itoa(n,s,ABC);
}

int itoa(int n,char s[], int t)
{
printf("%dA",t);
	int i = 0, sign, h = 0;

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
	printf("|%s|",s);
}
