#include <stdio.h>

#define MAAX 100
#define TRUE  1
#define FALSE  0

int gtline(char string[],int limit);
void remove_comment(char in[],char out[] );

main()
{
	char strin[MAAX];
	char strout[MAAX];

	gtline(strin, MAAX);	
	remove_comment(strin,strout);

	printf("%s",strout);
	return 0;
}

int gtline(char in[], int max){

int i = 0;
int c;

for (;(c = getchar()) != EOF && i < max ; ++i )
	in[i] = c;
	
in[++i] = '\0';
	
return i;
}

void remove_comment(char in[], char out[]){

int i,c;
int line_comment = FALSE;
int text_comment = FALSE;	

for(i = 0; i < MAAX;++i){


		if (in [i-1] == '/' && in[i] == '*'){
			text_comment = TRUE;
			in [--i] == '\0';

		}
		 if (in[i-1] == '*' && in[i] == '/'){
			text_comment = FALSE;
			in[i] = '\0';
		}

		if (in[i-1] == '/' && in[i] == '/'){
			line_comment = TRUE;
			in[--i] = '\0';

		}
		if (line_comment == TRUE && in[i] == '\n'){
			line_comment == FALSE;
		}

	if (line_comment == TRUE || text_comment == TRUE ){
		in [i] ='\0';
	}
	
	if ( line_comment == FALSE || text_comment == FALSE)
		out[i] = in[i];
	}
}
