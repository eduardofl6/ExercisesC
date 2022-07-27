#include <stdio.h>

#define MAX 100

char s[MAX];

int getline();
int hex_value();
int hex_pot(int coeficient);

main(){

for(int i = 0; i < MAX;++i){
		s[i] = '\0';
}


	getline();

	hex_value();
	
}

int getline(){
	
		char c;
		int i = 0;
	
	for (; i <= MAX && (c = getchar()) != EOF && c != '\n';++i){
		s[i] = c;

		}
	s[i] = '\0';
	
}

int hex_value(){

	int value = 0;
	int i = 0;
	int ox = false;
	int timer = -1;
int was = false;

	for (; i <= MAX && s[i] != '\0'; ++i){
	
		if(s[i-2] == '0' && s[i-1] == 'x' || s[i-1] == 'X')
			ox =  true;
		if(ox == true && was == false){
			was = true;
				for(int b = i; s[b] != EOF && s[b] != '\0';++b){
						++timer;
					
				}}
		
		if(ox == true){
		
				switch(s[i]){
				case 'A': case 'a':
			
					value += 10 * hex_pot(timer);
					--timer;
				break;
					case 'B': case 'b':
			
					value += 11 * hex_pot(timer);
					--timer;
				break;
					case 'C': case 'c':
			
					value += 12 * hex_pot(timer);
					--timer;
				break;
					case 'D': case 'd':
					value += 13 * hex_pot(timer);
		
					--timer;
				break;
					case 'E': case 'e':
					value += 14 * hex_pot(timer);
					--timer;
				break;
					case 'F': case 'f':
			
					value += 15 * hex_pot(timer);
					--timer;
				break;
				default:
					
						value += (s[i] - 48) * hex_pot(timer);
						--timer;
					break;
				}
						
				
		}}
		printf("|%d|",value);
	
}

int hex_pot(int b){

	int i = 0;
	int v = 1;

	for(;i < b;++i){
		 v *= 16;
		 }

	if (b == 0)
		v = 1;

	return v;
}
