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

unsigned invert(unsigned x, int n, int p);

unsigned revert(unsigned x, int n, int p);

main()
{
unsigned n = 5;
unsigned p = 2;
unsigned x = 0b11110011;

	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(revert(x, n, p)));
}

unsigned revert(unsigned x, int n, int p)
{
	
unsigned mask1 = (~(~0 << n) << p);

return (x & ~mask1);
}


unsigned int invert(unsigned x, int n, int p)
{


  unsigned int mask1 = ~(~0 << n) << p;
  unsigned int mask2 = ~mask1 & x;

  return mask2 | ~x;
}
