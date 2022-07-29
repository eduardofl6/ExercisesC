//IMC calculator

#include <stdio.h>

int main(void){
	
float height, weight;
float IMC;
printf("Enter your height (in meters): ");
scanf("%f", &height);

printf("Enter your weight (kilos): ");
scanf("%f", &weight);

IMC = weight / (height * height);

printf("Your IMC is: %.2f", IMC);

}



