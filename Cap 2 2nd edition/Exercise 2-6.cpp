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

unsigned int setbits(int x, int p, int n, int y);

int main(void)
{
  unsigned int x = 0b00100000;
  unsigned int y = 0b00011000;

  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(setbits(x, 2, 4, y)));
  
  return 0;
}

unsigned int setbits(int x, int p, int n, int y)
{
 

unsigned mask1;
unsigned y1 = y;

mask1 = (~(~0 << n) << p);
y1 |= mask1 >> p;
  

  return x | y1;
}
