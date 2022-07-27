#include <stdio.h>

float convert(int fahr);

main()
{
	
for (int i = 0; i <= 300; i += 20){
	
	printf("%d\t%.0f\n",i, convert(i));
	}
}

float convert(int fahr){
	
	int celsius = 5.0/9.0 * (fahr - 32);
	
	return celsius;

}
