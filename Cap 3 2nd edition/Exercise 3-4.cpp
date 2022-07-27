#include <stdio.h>
#include <string.h>
#define MAX 100

void itoa(int n, char s[],int f);

main()
{
int n = 132;
char s[MAX];
int field = 5;

for (int i = 0; i <= MAX;++i){
	s[i] = 0;
}
itoa(n, s,field);
}

void itoa(int n, char s[],int f)
{
	int i = 0, sign;
int h = 0;
	if ((sign = n) < 0	)
		n = -n;
	
	do{
	
		s[i++] = n % 10 + '0';
			printf("|%c|",s[i-1]);
	}while((n /= 10) > 0);
	

	for(;i++ <= f;)
		s[i] = ' ';
		printf("%s",s);
	if (sign < 0)
		s[i++] ='-';
	
	s[i] = '\0';

strrev(s);

	printf("x%sx",s);	
}
