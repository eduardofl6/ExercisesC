#include <stdio.h>
#define MAX 1000

int getline(char s[], int lim);
int strrindex(char s[],char t[]);

char pattern[] = "ould";

main()
{
char line[MAX];

while (getline(line,MAX) > 0)
	{
		if(strrindex(line,pattern) >= 0)
			printf("%s",line);		
	}

return 0;
}

int getline(char s[MAX], int lim)
{
int c = 0, i = 0;

while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')	
		s[i++] = c;
	s[i] = '\0';
return i;
}

int strrindex(char s[],char t[])
{
int i,j,k;
int cp,hpp,f = 0;
	char lastptt[MAX];
	for(i = 0; s[i] != '\0' ;++i)
	{
		for(j=i, k =0; t[k] != '\0' && s[j] == t[k];++k,++j);	
			if ( k > 0 && t[k] == '\0')					
				{
				++hpp;
				cp = i;
				}
	}
while (s[--cp] != ' ');	

while(s[++cp] !=' ')
		lastptt[f++] = s[cp];
printf("Last pattern: %s\n",lastptt);

if (hpp)
		return i;	
	else
return -1;
}
