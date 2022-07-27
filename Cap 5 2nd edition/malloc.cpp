#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1000

char *alloc(int n);
void afree(char *p);

main()
{

int inbt[5], p = 4, o = 2;

inbt[0] = 2, inbt[1] = 1;

int *z = &inbt[0], *v = &inbt[1], *l = &p,*y = &o;

//Actaully if you add some n number/variable to a pointer without *, you'll bring the n-th position beyond of the variable that point point to, if itsn't a array (that have positions)
//you'll just had problems.
printf("%d|",l+o);

//With * the pointers are inbt[0] = 2 and inbt[1] = 1
if (*v < *z)
	putchar('T');

//Without * the pointers are inbt[0] and inbt [1]
if (v > z)
	putchar('Z');
char b = 10;
	
char *test = alloc(10);
*(test+12) = 'd';
printf("\nTest: %c",*(test+12));

}

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
