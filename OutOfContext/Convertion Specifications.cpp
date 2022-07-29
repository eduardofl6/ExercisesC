#include <stdio.h>

int main(void)
{
	
	float a = 513.32124f;
	
// %m.pX | m is the minimum number of charactere, p is the number of characteres after the decimal point, and X is F, conversation specification.
	printf("%10.2f\n", a);
/* Example of m. If we have the number 10.0, and m is 4, because there is 4 characters(decimal point joins it) the print will be right,
 but if m is 6, the print will display it "  10.0" there is two spaces before the number, 4 digits + 2 spaces = 6, and 6 is the m 
 number*/
 
 
float i = 10.0f;
int x = 20;

 
printf("\b\t|%d|%5d|%-5d|%5.3d|\n",x , x, x, x);
printf("\t|%f|%.5f|%12.3e|%-10g|\a",i,i,i,i);


/*
Alert (bell) \ a
Backspace \b
New line \n
Horizontal tab \ t
*/

int n, j;
float b, k;
scanf("%d%d%f%f",&n,&j,&b,&k);

	
}
