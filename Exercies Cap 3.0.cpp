/* Exercices Cap 3.0*/

#include <stdio.h>


int main(void)
{
	
float b1 = 1.1000f;
printf("|%-8g|\n",b1);

//or
float b2 = 2.123456f;
printf("|%10.7g|\n",b2);

float b3 = 3.000f;
printf("|%-8.3f|\n", b3);

float b4 = 4.000f;
printf("|%6.0f|\n",b4);


int a = 1;
int b,c = 1;
scanf("%d", &a);
printf("%d\n",a);

scanf("%d-%d-%d", &a, &b, &c);
printf("%d-%d-%d\n",a,b,c);
	
scanf("%d", &a);
printf("%d\n", a);

scanf("%d,%d", &a, &b);
printf("%d,%d\n",a, b);
	
	
	
}
