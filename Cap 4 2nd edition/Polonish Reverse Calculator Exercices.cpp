#include <stdio.h>
#include <stdlib.h>  // For atof
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAXOP  100
#define NUMBER '0'
#define MAXVAL 100 
#define LETTER 65
#define BUFFSIZE 100

char getline(char s[MAXOP]);
void unget(char s[]);
int handf(int f, double f2);
char mathf(int b);
int getop(char []);
void push(double);
double pop(void);
double val[MAXVAL];
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
				push(atof(s));
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
				printf("\tAnswer:%.8g\n",rec = pop());
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
char line[MAXOP];
int li = 0;

int getop(char s[])
	{	
	
	int c, i=0 ,b;
	
	if(line[li] == '\0')
		if(getline(line) == 0)
			return EOF;
		else 
			li = 0;
	
	while((s[0] = c = line[li++]) == ' ' || c == '\t');
	
	s[1] = '\0';

	if (c >= 'A' && c <= 'Z')
		return LETTER;
	
	if(mathf(c));
	
	if (!isdigit(c) && c != '-' && c != '.')
		return c;
		
	if (c == '-')
	{
		if (isdigit(line[li+1]))
		{
			while (isdigit(s[++i] = c = line[li++]));
		}else 
			return '-';
	}

	i = 0;
		
	if ((isdigit(c)))
		while (isdigit(s[++i] = c = line[li++]))

	if(c == '.')
		while (isdigit(s[++i] = c = line[li++]));

	
	s[i] = '\0';

li--;
	return NUMBER;
}


////////////////////////// MATHF
char mathf(int b)
{
	switch (b)
	{
	case 's':
		if ((b = line[li++]) == 'i' &&(b = line[li++] == 'n'));
		b = 'v';
		return b;
		break;
	case 'e':
		if ((b = line[li++] == 'x' && (b = line[li++] == 'p')));
		b = 'n';
 		return b;
		 break;
	case 'p':
		if ((b = line[li++]) == 'o' && (b = line[li++] == 'w'));
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
////////////////////////// GETLINE
char getline(char s[])
{
int i,c;

for (i = 0; (c = getchar()) != EOF && i < MAXOP-1 && c != '\n';++i)
	{
	s[i] = c;
	}
s[i] = '\n';
return i;
}
