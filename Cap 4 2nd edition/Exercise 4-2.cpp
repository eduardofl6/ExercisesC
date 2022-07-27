#include <ctype.h>
#include <stdio.h>
#define MAXLINE 1000

double atof(char[MAXLINE]);

main()
{
char point[MAXLINE] = "15.50e10";

printf("%.15f",atof(point));
}

double atof(char s[])
{
double val, power,epower = 1;
int i, sign,enot,esign = 1;

	for(i = 0; isspace(s[i]);i++);
	
	sign = (s[i] == '-' ) ? -1 : 1;

	if(s[i] == '+' || s[i] == '-')
		i++;

	for(val = 0.0; isdigit(s[i]);i++)
		val = 10.0 * val + (s[i] - '0');

	if (s[i] == '.')
		i++;

	for (power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	} 

	if(s[i] == 'e' || s[i] == 'E')
		i++;
		

	esign = (s[i] == '-') ? (s[i++] * -1) : 1;

	for(int b = i; s[b] != '\0';b++)
	{
		enot = 10.0 * enot + (s[i] - '0');
	}

	for (; enot > 0; enot--)
		{
		epower *= 10;
		}

		return epower = (esign > 0)  ? ((sign *  val / power) * epower) : ((sign *  val / power) / epower);      
}
