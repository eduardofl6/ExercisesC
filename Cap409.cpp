//Exercises Output Cap4
#include <stdio.h>

int main(void)
{
	
int i, j, k;

i = 7; j = 8;
i *=  j + 1;

printf("%d %d\n", i, j);
	
i = j = k = 1;
i += j += k;
printf("%d %d %d\n", i, j, k);

i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d\n", i , j, k); 

i = 2; j = 1; k = 0;
i *= j *= k;	
printf("%d %d %d\n\n", i, j, k);


//CHANGING EXERCISE
printf(" Exercise 10: \n");


i = 6;
j = i += i;
printf("%d\n", j);

i = 5;
j = (i -= 2) + 1;
printf("%d\n", j);

i = 7;	
j = 6 + ( i = 2.5);
printf("%d\n", j);

i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d\n\n", j);

//CHANGING EXERCISE
printf("Exercise 11: \n");


i = 1;
printf("%d\n", i++ - 1);
printf(">%d\n", i);

i = 10; j = 5;
printf("%d\n ", i++ - ++j);
printf(">%d %d\n", i, j);

i = 7; j = 8;
printf("%d\n", i++ - --j);
printf(">%d %d\n", i, j);

i = 3; j = 3; k = 5;
printf("%d\n", i++ - j++ + --k);
printf(">%d %d %d\n", i, j, k);

//CHANGING EXERCISE

printf("Exercise 12 : \n");

i = 5;
j = ++i * 3  - 2;
printf("%d %d\n",i , j);

i = 5;
j = 3 - 2 * i++;
printf("%d %d\n", i, j);

i = 7;
j = 3 * i-- + 2;
printf("%d %d\n",i , j);

i = 7;
j = 3 + --i * 2;
printf("%d %d\n\n", i , j);

//EXERCISE 13

i = 2;
i += 1 + i;
printf("%d\n\n", i)

//EXERCISE 12


printf("")
}
