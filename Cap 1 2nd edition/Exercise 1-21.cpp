#include <stdio.h>

#define MAXLINE 100

main()
{
int c,i;
char line[MAXLINE];

for(i = 0;(c = getchar()) != EOF && c != '\n' && i < MAXLINE -1;++i ){

	if(line[i] == ' ' && line[i-1] == ' '){

		for (int p = i; line[p-1] == ' ';--p)
		line[p] = '\0';}else
		line[i] = c;
		

}
printf("%s",line);
return 0;
}
