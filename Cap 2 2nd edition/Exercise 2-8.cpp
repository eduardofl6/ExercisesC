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


unsigned rightrot(unsigned x, int n);

main()
{
unsigned x = 0b11001001;
int n = 3;


  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
printf("Rotating...\n");
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(rightrot(x,n)));

rightrot(x,n);
}

unsigned rightrot(unsigned x, int n)
{

return ((x >> n) | (x << (8 - n)));
	
	
}
