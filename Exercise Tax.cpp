//Tax exercise

#include <stdio.h>

int main(void)
{
	
	float dollars_cents, value_taxxed;
	
	printf("Enter a value in dollars and cents: ");
	scanf("%f", &dollars_cents);
	
	value_taxxed = dollars_cents + (dollars_cents * 0.05);
	
	printf("The value with tax is: %.2f$", value_taxxed);
	
	
	

	
}
