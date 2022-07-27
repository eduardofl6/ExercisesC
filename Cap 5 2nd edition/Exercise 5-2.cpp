#include <stdio.h>
#include <ctype.h>
#define SIZE 100

double getfloat(double *pn);

main()
{
int n;
double array[SIZE];

for(n = 0; n < SIZE && getfloat(&array[n]) != EOF; n++)
	printf("|%f|",array[n]);
}

int getch(void);
void ungetch(int);

double getfloat(double *pn)
{
int c, sign;

while(isspace(c = getch()));

if(c != '.' && !isdigit(c) && c != EOF && c != '+' && c != '-'){
	ungetch(c);
	return 0;
}
	sign = (c == '-') ? -1 : 1;

while (c == '+' || c == '-' || c == ' ')
	c = getch();

for (*pn = 0; isdigit(c); c = getch())
	*pn = 10 * *pn + (c - '0');

if(c == '.')
{
	double b = 1.0, v = 0.0;
	
	while(isdigit(c = getch()))
	{
		b *= 10;
		v = 10 * v + (c - '0');
	}
*pn += v / b;
}

*pn *= sign;

if (c != EOF)
	ungetch(c);
return c;
	
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
    }
