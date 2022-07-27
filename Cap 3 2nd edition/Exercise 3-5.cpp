#include <stdio.h>
#include <string.h>
#define MAX 100

int itob(int n,int b,char s[MAX]);

main()
{
int number = 82;
int base = 7;
char string[MAX];

itob(number,base,string);
}

int itob(int n,int b,char s[])
{
	int rem = 0, i =0,g, j =0,temp =0;
	
	while (n > 0)
	{
		rem = n % b;
		n /= b;
		
	s[i] = rem;
	
		++i;
	}
g = 1
 i -= 3;
do{
	temp = s[j];
	s[j] = s[--g];
	s[] 
	}
}
