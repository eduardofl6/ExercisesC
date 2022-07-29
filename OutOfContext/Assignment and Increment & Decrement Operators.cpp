//Asign simbol
#include <stdio.h>

int main(void)
{
	
int i = 10;
int a = 2;

i = i + 3;
i += 3;	
	
i -= 3;
i = i - 3;

i = i * 2;
i *= 2;

i *= a * i;
i += (a *= 20) + a;
printf("---------------------------------------------\n");
printf("      [STARTER VALUES S = 10, F = 1]\n");

int s = 10;
printf("The value of S is: %d ( ++S ) Insta add +1\n", ++s);
printf("The value of S is: %d( S )\n\n", s);
s = 10;

printf("The value fo S is: %d( S++ ) Add +1 later\n",s++);
printf("The value of S is: %d( S )\n\n", s);

printf("---------------------------------------------\n");

int F = 1;
printf("The value of F is: %d( --F ) Subtract -1 insta\n", --F);
printf("The value of F is: %d( F )\n\n", F);
F = 1;
printf("The value of F is: %d( F-- ) Subtract -1 later\n", F--);
printf("The value of F is: %d( F )\n\n", F);

printf("---------------------------------------------");

}
