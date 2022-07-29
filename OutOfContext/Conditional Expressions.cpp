//Conditional Expessions

#include <stdio.h>

int main(void)
{
	
int i, j, k;
i = 1;
j = 2;

if (i > j)
	return i;
else	
	return j;
//other way

return i > j ? i : j;
		
		//Doesn't work because there is already a return.

if ( i > j)
	printf("%d\n",i);
else 
	printf("%d\n", j);
		
	
	return 0;
}
