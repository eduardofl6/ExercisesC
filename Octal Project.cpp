//Number to Octal
#include <stdio.h>

int main(void)
{
	
int n, o, o2, o3, o4, o5;

printf("Enter a number between 0 and 32767: ");
scanf("%d", &n);

o = n % 8;
n = n / 8;
o2 = n % 8;
n = n / 8;
o3 = n % 8;
n = n / 8;
o4 = n % 8;
n = n / 8;
o5 = n % 8;


printf("Octal number: %1d%1d%1d%1d%1d",o5, o4, o3, o2, o);

	
	
	
	
	
}
