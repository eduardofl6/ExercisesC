#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);

void qsort(char *lineptr[], int left, int right);

main()
{
	int nlines;
	
	if((nlines = readlines(lineptr,MAXLINES)) >= 0){
		qsort(lineptr,0,nlines-1);
		writelines(lineptr,nlines);
		return 0;
	} else 
	{
		printf("error: intup too big to sort '\n'");
		return 1;
	}
	
}


#define MAXLEN 1000
int getline(char *, int);
char *alloc(int);

int readlines(char *lineptr[],int maxlines)
{
	int len, nlines;
	
	char *p, line[MAXLEN];
		
	nlines = 0;
	while((len = getline(line,MAXLEN)) > 0)
		if(nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0'; // deletes newline
			strcpy(p,line);
			lineptr[nlines++] = p;
		}
	return  nlines;
}

void writelines(char *lineptr[],int nlines){
	int i;
	
while(nlines--)
	{
			printf("%s",*lineptr++);
	}
}


void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);

	if( left >= right)
		return;
	swap(v,left,(left+right) /2);
	last = left;
	for(i = left+1; i <= right; i++)
		if(strcmp(v[i], v[left]) < 0)
			swap(v,++last,i);
	swap(v,left,last);
	qsort(v, left, last-1);
	qsort(v, last+1,right);
}

void swap(char *v[],int i, int j)
{
	char *temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

#define BUFFSIZE 1000

char *alloc(int n);
void afree(char *p);

static char allocbuff[BUFFSIZE];
static char *allocp = allocbuff;

char *alloc(int n)
{
	if(allocbuff + BUFFSIZE - allocp >= n){
		allocp += n;
		return allocp - n;
		}
	else
		return 0;
}

void afree(char *p)
{
	if (p >= allocbuff  && p < allocbuff + BUFFSIZE)
	allocp = p;
}

int getline(char *line,int max)
{
int i = 0;

while((*(line++) = getchar()) != EOF)
		i++;	
return i;
}
