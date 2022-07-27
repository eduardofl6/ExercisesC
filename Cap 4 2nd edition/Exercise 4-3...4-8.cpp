#include <stdio.h>
#include <stdlib.h>  // For atof
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAXOP  100
#define NUMBER '0'
#define MAXVAL 100 
#define LETTER 65

void unget(char s[]);
int handf(int f, double f2);
char mathf(int b);
int getop(char []);
void push(double);
double pop(void);
double val[MAXVAL];
int getch(void);
int sp = 0;

// Reverse Polish Calculator	
main()
{
	int type, ls;
	double op2,variable[25],test;
	char s[MAXOP];
	double temp = 0.0, rec = 0.0;
	
	for(int i = 0; i < 26; i++)
		variable[i] = 0.0;
	
	while ((type = getop(s)) != EOF){

		switch (type){
		case NUMBER:
				push (atof(s));
			break;
		case '+':
				push(pop() + pop());
			break;
		case '*':
		 		push(pop() * pop());
			 break;		
		case '-':
				op2 = pop();
				push(pop() - op2);
			 break;		
		case '%':
				op2 = pop();
				if (op2 != 0)
					push((int)pop() % (int) op2);
				else 
					printf("Error: Zero Divisor\n");
			break;
		case '/':
		 		op2 = pop();
		 		if( op2 != 0.0)
				 	push (pop() / op2);
				else
					printf("Error: Zero Divisor\n");
			 break;			 	
		case '\n':
				printf("\t%.8g\n",rec = pop());
			break;
		case 'c':	
			for(int b = 0; b < MAXVAL; ++b)
				val[b] = 0;	
				printf("\tStack Clear\n",pop());
			break;
		case 'p':
				printf("Top:%g\n",rec = val[sp-1]);
			break;
		case 'd':
				printf("Top stack duplicated\n");
				val[sp-1] *= 2;
			break;
		case 's':
				printf("Top 2 swaped");
				temp = val[sp-1];
				val[sp-1] = val[sp-2];
				val[sp-2] = temp;
			break;
		case 'v':
				push (sin(pop()));
			break;
		case 'b':
			push(exp(pop()));
			break;
		case 'n':
			push(pow(val[sp-1],pop()));
			break;
		case LETTER:
			if(variable[(s[0] - LETTER)])
				push(variable[(s[0] - LETTER)]);
			else
				push(s[0] - LETTER);
			break;
		case '=':
				op2 = pop();
				test = pop();
				push(variable[(int) test] = op2);
			break;
		default :
			printf("Error: unknow comman %s\n", s);
			break;
				}
		}
return 0;
}

////////////////////////// PUSH & POP
#define MAXVAL 100 

void push(double f)
{
	if (sp < MAXVAL)
	{
			val[sp++] = f;
	}
	else
		printf("Error: stack full, can't push %g\n",f);
		//printf("Stack: %f\n",f);
}

double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("Error: stack empty\n");
		return 0.0;
	}
}

////////////////////////// GETOP

void ungetch(int );

int getop(char s[])
{
	int i, c;
	
	while((s[0] = c = getch()) == ' ' || c == '\t');
	
	s[1] = '\0';
	i = 0;

	if (c >= 'A' && c <= 'Z')
		return LETTER;
	
	if(mathf(c));
	
	if (!isdigit(c) && c != '-' && c != '.')
		return c;

	if (c == '-')
	{
		if (isdigit(c = getch()))
		{
		ungetch(c);
		while (isdigit(s[++i] = c = getch()));
		}else 
			return '-';
	}
	if ((c >= '0'  && c <= '9') || c == '-')
		while (isdigit(s[++i] = c = getch()))

	if(c == '.')
		while (isdigit(s[++i] = c = getch()));

	s[i] = '\0';
		if (c != EOF)
			ungetch(c);
	
	return NUMBER;
}

////////////////////////// GET & UNGETCH
#define BUFSIZE 100

char buf; 

int getch(void)
{
	int c;
	
	if(buf > 0 )
		c = buf;
	else 
		c = getchar();
	buf = 0;
	if(c == EOF)
		
	return c;
	
}

void ungetch(int c)
{
	if (buf)
		printf("ungetch: too many characters\n");
	else
	buf = c;
}

////////////////////////// MATHF
char mathf(int b)
{
	switch (b)
	{
	case 's':
		if ((b = getch()) == 'i' &&(b = getch()) == 'n');
		b = 'v';
		return b;
		break;
	case 'e':
		if ((b = getch()) == 'x' && (b = getch()) == 'p');
		b = 'n';
 		return b;
		 break;
	case 'p':
		if ((b = getch()) == 'o' && (b = getch()) == 'w');
		b = 'm';
		return b;
	break;	
	}
	return b;
}

////////////////////////// UNGETS

void unget(char s1[MAXVAL])
{
	int len = strlen(s1);

while (len > 0)
	{
		s1[len--];
	}
}
