#include <stdio.h>

main(){
char chaR = 127;
short shorT = 32767;
int inT = 2147483647;
long lonG = 2147483647;
unsigned char uchar = chaR * 2 + 1 ;
unsigned short ushort = shorT * 2 + 1;
unsigned int uint = inT * 1 ;
unsigned long int ulong = lonG * 1;

int v1 = 2;
int v = 16;
int r = v;

for (; v1 >= 0; --v1){
	r = r * v;
}
	printf("||%d||",r);
	

printf("Char: %d\nShort: %d\nInt: %d\nLong: %d\nUnsigned Variables\nChar: %d\nShort: %d\nInt: %d\nLong: %d",chaR,shorT,inT,lonG,uchar,ushort,uint,ulong);
}
