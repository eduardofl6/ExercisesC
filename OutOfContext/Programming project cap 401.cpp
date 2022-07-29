//Programming Project 1.

#include <stdio.h>

int main(void)
{
	
int n, n2, n3;
printf("Enter a number with 3 digits: ");
scanf("%d", &n );

printf("The reverser is: %d|%d|%d\n", n % 10, n / 10 % 10, n/ 100);
//Without Arithmetic

printf("Enter a number with 3 digits : ");
scanf("%1d%1d%1d", &n, &n2, &n3);

printf("The reverser is: %d%d%d", n3, n2, n);
	return 0;
}
