#include <stdio.h>

int main(){
	int c;



while ((c = getchar()) != EOF){
if (c == '\t'){
	c = getchar();
	putchar('\t');
}
if (c == '\\'){
	c = getchar();
	putchar('\\');
}
if (c == '\b'){
	c = getchar();
	putchar('\b');
}

putchar(c);

}



return 0;
}
