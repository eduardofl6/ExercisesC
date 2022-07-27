#include <stdio.h>
#define MAX 50

int getline(char *line,int max);

main()
{
	char texto[MAX];
	
	printf("1:%s\n",texto);
	
	int b = getline(texto,MAX);
	
	printf("2:%s\nb: %d",texto,b);
}

int getline(char *line,int max)
{
int i = 0;

while((*(line++) = getchar()) != EOF)
		i++;	
return i;
}
