#include <stdio.h>
#include <string.h>
#define MAX 100

char itoa(int value, char *string);
void reverse(char *s);

main()
{
	int inT = -123;
	char result[20];
	
	itoa(inT,result);


 printf("%s",result);
}

char itoa(int vl, char *st)
{
	char *t = st;
	int n = vl;
	
	if(vl < 0)
		vl = -vl;
	
	do{
		*st++ = vl % 10 + '0';
	}while((vl/=10) > 0);
	
	if( n < 0 )
		*st++ = '-';	
		
	*st = '\0';
	
//Important notation, to doesn't have problems with using a pointer from a parameter in a function inside a function, you point other point to that pointer, in this case is char *t = st
reverse(t);
}

void reverse(char *s)
{
	char A[MAX];
	int b = 0,v = 0;

	while((A[b] = *(s+(b++))) != '\0');
	while((*(s+(v++)) = A[--b] ) != '\0');
}
