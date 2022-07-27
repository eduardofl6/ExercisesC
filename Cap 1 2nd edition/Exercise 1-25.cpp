#include <stdio.h>

#define MAAX 10000
#define FALSE 0
#define TRUE 1

char strin[MAAX];
int gtline();
void syntax_check();

main()
{
	gtline();

	syntax_check();

	printf("%s",strin);

}

int gtline(void){

	int i = 0;
	int c;


	for (;(c = getchar()) != EOF && i < MAAX ; ++i )
		strin[i] = c;
	
	strin[++i] = '\0';
	
	return i;
}

void syntax_check(){

int i,c;
int open_brackets = FALSE;
int open_braces = FALSE;	
int open_parentheses = FALSE;
int open_quotes = FALSE;
int open_quotess = FALSE;
int line_comment = FALSE;
int text_comment = FALSE;
int semicolon_error = FALSE;

for(i = 0; i <= MAAX;++i){

strin[i];
			
			

if (open_quotess == FALSE || open_quotes == FALSE){

	if (strin[i-1] == '/' && strin[i] == '/' )
		line_comment = TRUE;
		
		if ( line_comment == TRUE && strin[i] == '\n')
			line_comment = FALSE;
			
	if (strin[i-1] == '/' && strin[i] == '*')
		text_comment = TRUE;
		if (strin[i-1] == '*' && strin[i] == '/')
			text_comment = FALSE;
}

if (line_comment == FALSE && text_comment == FALSE){

			
			if(strin[i] == 39 && open_quotess == TRUE)
				open_quotess = FALSE;
	else
	if (strin[i] == 39)
			open_quotess = TRUE;
	
			if(strin[i] == 34 && open_quotes == TRUE)
					open_quotes = FALSE;
	else
		if (strin[i] == 34)
				open_quotes = TRUE;	

if	(open_quotes == FALSE && open_quotess == FALSE){

	if(strin[i] == '\n' && strin[i-1] != ';'){
		semicolon_error = TRUE;	
	}
	
	switch(strin[i]){
		case '(':
		open_parentheses = TRUE;
			break;
		case ')':
		open_parentheses = FALSE;
			break;
		case '[':
		open_braces = TRUE;
			break;
		case ']':
		open_braces = FALSE;
			break;
		case '{':
		open_brackets = TRUE;
			break;
		case '}':
			open_brackets = FALSE;
			break;
		 default:
			break;
				}
			}
		}	
	}
if (open_braces == TRUE || open_brackets == TRUE || open_parentheses == TRUE || open_quotes == TRUE || open_quotess == TRUE || semicolon_error == TRUE)
	printf("||Syntax error||\n");	

}
