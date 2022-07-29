// Your weight in the SUN

#include <stdio.h>

int main(void){
	
float weight = 0.0f;
float Gsun = 174;
float Gearth = 9.81f;

float Weightsun = 0.0f;

printf("Your weight (KG): ");
scanf("%f", &weight);

Weightsun = weight / Gearth * Gsun;

printf("Your weight in the Sun is: %.1fKG", Weightsun);

	
}
