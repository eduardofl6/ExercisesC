//Operators and Operands
#include<stdio.h>

int main(void)
{	
int a = 5;
int b;
int i,j;


int c = (b = a + 2) - ( a = 1);
printf("%d\n", c);

a = 5;
b = a + 2;
a = 1;
c = b - a;
printf("%d\n", c);


i = 2;
j = i * i++;
/* Explaining: (1) The second operand is fetched(precedence 1), then i is incremented||(2) The first operand is fetched(Now with the new value
||(3) Then the new and old value are multiplied*/
printf("%d\n", j);
}
