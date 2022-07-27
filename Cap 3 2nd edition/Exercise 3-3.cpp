#include <stdio.h>
#define MAX 100

char expand(char s1[MAX], char s2[MAX]);
char output[MAX];

main(){
char input[MAX] = "a-fD";

expand(input,output);
printf("%s",output);
}

char expand(char s1[MAX], char s2[MAX])
{
	
int j = 0;
char temp[MAX];
char st, ed;

for (int i = 0;s1[i] != '\0';++i)
	temp[i] = 0;

for(int b = 0; s1[b] != '\0';++b)
	{
	if (s1[b] >= 'A' && s1[b] <= 'Z')
		s1[b] = s1[b]  + 'a' - 'A';

	if(s1[b] >= 'a' && s1[b] <= 'z' &&s1[b] != '-')
		temp[j++] = s1[b];
	}

st = (char)temp[0];
ed = temp[j-1];

for(int v = 0;st <= ed;++v)
	{
	s2[v] = st++;
	s2[++v] = (st > ed) ? '\0' : '-';
	}

}
