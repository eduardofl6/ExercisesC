#include <stdio.h>
#define MAX 100

char escapeseq(char s[], char t[]);
char escape(char s[], char t[]);
char out[MAX];

main()
{
char in[MAX];

int c;

for ( int b = 0; (c = getchar()) != EOF;)
{
		out[b] = 0;
	in[b++] = c;
}
escapeseq(in,out);
printf("In: %s\nOut: %s",in, out);
}

char escape(char s[], char t[])
{
int v = 0, b = v;

while (s[v])
{
	switch (s[v]){
		case '\n' :
			t[b] = '\\';
			t[++b] =  'n'; 
			;
		
		break;
		case  '\t' :
			t[b] = '\\';
			t[++b] = 't';
			
		break;
			default : t[b] = s[v];
		break;
		}	
	v++;
	b++;
	}	
}

char escapeseq(char s[], char t[])
{	
int v = 0, b = 0;

while (s[v])
	{	
		if(s[v] == '\\')
		{
			switch(s[v+1])
			{
			case 't':
					t[b] = '\t';
					b++;
					v += 2;
			break;
			case 'n' :
					t[b] = '\n';
					b++;
					v += 2;
			break;
				default:
			break;
			}
		
		}
	t[b] = s[v];
	++b;
	++v;
	}
t[b-1] = '\0';
}

