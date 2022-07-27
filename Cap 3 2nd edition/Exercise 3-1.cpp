#include <stdio.h>

int binsearch(int x, int  v[], int n);

main()
{
int x = 15, n = 20, s[n];

for(int b = 0; b <= n; ++b)
	s[b] = b;

printf("Answer: %s",binsearch(x,s,n) ? "YES" : "NO");
}

int binsearch(int x, int  v[], int n){

int low = 0, b = low;

int high = n - 1;

while (b <= high){

	
	if (x == b++)
		return 1;
	}
if ( x > v[high] || x < v[low])
	return 0;	
}
