#include <stdio.h>
#define swap(t,y,x) {	t _z; \
						_z = y; \
						y = x; \
						x = _z;	}
typedef int v; 	

main()
{
int t = 5;
int a = 3;
swap(v,t,a);
printf("%d",a);					
}
