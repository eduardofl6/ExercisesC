#include <stdio.h>

main()
{
int array[10];

for (int i = 1; i < 11; ++i){
	array[i] = i;
}
	
array[8] = 220;
printf("%d",array[0]);
printf("%d",array[1]);
printf("%d",array[2]);
printf("%d",array[3]);
printf("%d",array[8]);
}
