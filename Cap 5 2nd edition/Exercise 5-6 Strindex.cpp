#include <stdio.h>

int strindex(const char *source,const char *searchfor);

main()
{
	
	char content[] = "01234567kpo9";
	char look[] = "kpo";
	int v = (strindex(content,look));
	printf("look occurs in content in the %d position\n%s",v,content);
}

int strindex(const char *s,const char *sc)
{
int k,i,v;

	for(i=0; *(s+i) != '\0';i++)
	{
		for(k = i, v = 0;*(sc+v) != '\0' && *(sc+v) == *(s+(k));k++,v++);
		
		if(*(sc+v) == '\0' && k > 0)
			return i;
	}
	return -1;
}
