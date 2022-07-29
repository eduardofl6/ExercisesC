// Dollar amount
#include <stdio.h>

int main(void)
{
	
int valor, bill20, bill10, bill5, bill1;


printf("Enter a dollar amount: ");
scanf("%d", &valor);
		
bill20 = valor / 20;
valor = valor - bill20 * 20;

bill10 = valor / 10;
valor = valor - bill10 * 10;
	
bill5 = valor / 5;
valor = valor - bill5 * 5;

bill1 = valor / 1;

printf("The bills needed: \n20 Bills: %d\n10 Bills: %d\n5 Bills: %d\n1 Bills	: %d", bill20, bill10, bill5, bill1);

return 0;
}
