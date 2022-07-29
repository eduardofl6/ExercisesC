//Fahrenheit to Celsius
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALES_FACTOR (5.0f / 9.0f) /* ".0F" after the number is imporant to get a float result
, if we put a int value, the result is int, and not float, like 8.5F°
*/

int main(void){
	
float fahrenheit, celsius;

	printf("Hello, enter a fahrenheit temperature:");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - FREEZING_PT) * SCALES_FACTOR;

	printf("This temperature in celsius is: %.2fC", celsius);

//NEVER FORGET ABOUT THE "&" IN THE SCANF, IT COMES BEFORE THE DESTINY VARIABLE!!!
}
