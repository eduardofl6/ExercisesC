#include <stdio.h>

#define MAXLINES 1000

int getline(char s[], int maxlines);
void reverse(char s[],int lenghr);

main()
{
int len;
char line[MAXLINES];

while ((len = getline(line, MAXLINES)) > 0){
	reverse(line, len);
	printf("%s",line);
	}
	return 0;
}

int getline(char s[], int maxlines)
{
int i,c,k;

for (i = 0; (c = getchar()) != EOF && i < maxlines-1 && c != '\n';++i){
		s[i] = c;
	}


	if ( c == '\n'){
	s[i] = '\n';
	++i;
}

s[i] =  '\0';
return i;
}

void reverse(char s[],int len)
{
int i,b, k[len];
int j = len - 2;
int last[len];

for (i = 0; i <= len ;++i){
	k[i] = s[i];
	}


for(b = 0;j >= 0; --j, ++b){
	s[b] = k[j];
	}
}


