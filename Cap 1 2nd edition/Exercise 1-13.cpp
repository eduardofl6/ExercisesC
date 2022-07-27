#include <stdio.h>

main()
{
int c, i;
int lenght[30];
i = 0;

for (int k = 0; k <= 30; ++k)
	lenght[k] = 0;

while ((c = getchar()) != EOF){
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		++lenght[i];else
	if (c == ' ' || c == '\t' || c == '\n')
	++i;
}
	
for (int b = 0 ; b < i; ++b){

	printf("%d Word: %d",b + 1, lenght[b]);
		for(int i = 0; i < lenght[b];++i)printf("||| ");
	putchar('\n');
}
	
	
}
