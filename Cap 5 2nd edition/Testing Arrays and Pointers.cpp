#include <stdio.h>

//Examples of array with pointers

char f(char *s);

main()
{
char array[100] = "ABCD";

f(&array[1]);

printf("%s",array);
}

char f(char *s)
{
int i = 2;
int b = 0;

printf("S starting in array[1] (B):|%c|\n",*s);
printf("S starting at  *s+0 = array[1] = B: |%c|\n",*(s+b));

printf("S is starts at array[1](B) + (i = 2) = array[3](D):|%c|\n",*(s += i));

printf("How s now starts at array[3] because s[1] += i[2] is s[3], the addition of the sequence 0123456 will start at array[3]\narray[3] be subscribing by the start of the sequence (array[3] = D\n");
while ( b < 7)
	*(s+b) = (b++  + '0');
}
