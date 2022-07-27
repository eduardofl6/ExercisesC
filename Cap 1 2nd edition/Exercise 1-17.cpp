#include <stdio.h>

#define MAXLINES 1000
#define MIN 10

int getline(char line[], int maxline);

main()
{
int alen;
char dream[MAXLINES];

while((alen = getline(dream, MAXLINES)) > 0){
    if ( alen > MIN){
        printf("%s",dream);

        }
    }
return 0;
}

int getline(char line[], int maxlines)
{
int i, c;

for(i = 0; (c = getchar()) !=  EOF && c != '\n' && i < maxlines-1 ; ++i){
    line[i] = c;
	 if (c == '\n'){
	 
        line[i] = '\0';
        break;}
}
  line[++i] = '\n';

return i;
}
