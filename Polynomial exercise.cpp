// Polynomial

#include  <stdio.h>

int main(void)
{

int x;


printf("Enter a value to the formula: ");
scanf("%d",&x);


x = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;

printf("The value of x is: %d\n", x);

//OTHER WAY 

int y;
int formula;

printf("Enter a value to the formula (Part Two): ");
scanf("%d",&y);


formula = 3*y*y*y*y*y+2*y*y*y*y-5*y*y*y-y*y+7*y-6;

printf("The value of y is: %d", formula);

//formula 2

int z;
int formula2;

printf("Enter value of z: ");
scanf("%d", &z);

formula2 = ((((3*z+2)z-5)z-1)z+7)z-6;
printf("Result is: %d",formula2);

}


