#include <stdio.h>
#include <ctype.h>

int atoi( char *string);

main()
{
	char line[] = "520";
	
	int value = atoi(line);
	
	printf("Value: %d\n",value);
}

int atoi(char *st)
{
	int i = 0,sign;
	
	for(;isspace(*st);st++);
	
	sign = (*st == '-') ? -1 : 1;

	if(*st == '+' || *st == '-')
		st++;
	
	while(isdigit(*st))
		i = 10 * i + (*(st++) - '0');

	return i * sign;
}
