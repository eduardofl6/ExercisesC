// Teste
/* Test codding 
Number 123
	*/

#include <stdio.h>

int main(void){

//Set height as a int variable.
int height;

//Set height value as 10.
height = 10;
int height2 = 20;

// Set peso as a float type variable, then gives it 100.5 as number.
float peso = 100.5f;

/*Get the height value and prints it with the string, %d means the height(int type)
 value position and the /n add a new text-line after the string*/

printf("The height is: %d\n", height);

/*Do the same thing as the other example, but this time using a float value,
Floats value recive %f in the string*/
printf("The peso is: %.f\n", peso);
printf("The peso is: %.2f\n", peso);

printf("Height1: %d, Height2: %d \n", height, height2);

int valor1 = 10;
int valor2 = 20;
int valor3 = 40;

int Soma = valor1 + valor2 + valor3;

printf("%d",Soma);
}
