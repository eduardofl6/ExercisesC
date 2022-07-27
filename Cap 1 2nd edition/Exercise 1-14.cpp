#include <stdio.h>

#define CHARS 128

main()
{
int c, ct;
int freq[CHARS];
		
		
for (int k = 0; k <= CHARS; ++k)
	freq[k] = 0;

			
		
while ((c = getchar()) != EOF){
	freq[c] += 1;
}

for (int p = 0; p < CHARS;++p)
{
if (freq[p] > 0 && freq[p] != '\n' && freq[p] != '\0' && freq[p] != ' ') {

	putchar(p);

			for (int i = 0; i < freq[p]; ++i)
			 putchar('*');

	putchar('\n');
	}
}

}
