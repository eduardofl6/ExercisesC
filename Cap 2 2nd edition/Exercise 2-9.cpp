#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c\n"
#define BYTE_TO_BINARY(byte)   \
  (byte & 128 ? '1' : '0'),    \
      (byte & 64 ? '1' : '0'), \
      (byte & 32 ? '1' : '0'), \
      (byte & 16 ? '1' : '0'), \
      (byte & 8 ? '1' : '0'),  \
      (byte & 4 ? '1' : '0'),  \
      (byte & 2 ? '1' : '0'),  \
      (byte & 1 ? '1' : '0')

/* Answer: 

Ex : 0110 = 6
   & 0101 = 5 		So this the reason for deleting the rightmost 1-bit, because (x-1) doesn't had 1-bit in the righmost position as (x), this rightmost bit of (x) is rightshifted by one, then the & operation masks it with zero.
   	 0100 = 4
*/
unsigned countone(unsigned x);

main()
{
unsigned x = 7;

printf("||%d||",countone(x));
}

unsigned countone(unsigned x){
	
int b; 
while (x)
{
x &= (x-1);
++b;	
}
/*NOTE: This happens because each time a bit is deleted, b increment 1, and one by one the bits are deleted, then incrementing the b
EX: 0110 = 6 x
&=	0101 = 5 (x-1)
 x = 0100 = 4  = ++b;
 	One bit was deleted and B incremented by one. In the final, the result will be 2, because
 		0100 = 4
	  & 0011 = 3
		0000 = 0 = ++b;
	Then x isn't true anymore and the loop ends

return b;	
}
