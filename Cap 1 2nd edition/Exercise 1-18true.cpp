#include <stdio.h>

#define MAXLINES 1000

int getline(char line_get[],int maxlines);
void remove_blanks_trailing(char line[], int lenght);

main()
{
int i;
int len;
char text[MAXLINES];


while ((len = getline(text,MAXLINES)) > 0){
		
		remove_blanks_trailing(text,len);
		printf("%s",text);
		}	
	
	return 0;
	
}

int getline(char s[], int maxlines)
{
int i,c,k;

for (i = 0; (c = getchar()) != EOF && i < maxlines-1 && c != '\n';++i){
s[i] = c;

s[i] =  '\0';
return i;
}


void remove_blanks_trailing(char line[], int lenght)
{
int i;

for(i = lenght - 2; line[i] == ' '|| line [i] == '\t';--i);

line[i + 1] = '\n';
line[i + 2] = '\0';
}

