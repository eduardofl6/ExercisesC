#include <stdio.h>

main() {
char *pointer;
pointer = "point to somewhere";

*(pointer+1) = 65;

printf("%s",pointer);
// you can't change the value of a string constant that a pointer is pointing to
}
