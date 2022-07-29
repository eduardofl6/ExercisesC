// Precedence of A Expression

#include <stdio.h>

int main(void)
{
	
int a = 2;
int b = 0;
int c = 1;
int d = 2;
int e = 3;
int f = 2;
int g = 0;

--g;
printf("%d\n",g);

a = b += (((c++) - d) + ((--e) / (-f)));

printf("%d",a);
}
