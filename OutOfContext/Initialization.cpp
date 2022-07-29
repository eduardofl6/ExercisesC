	
	#include <stdio.h>
	
	int main(void){
	
	int height = 10, weight = 10, width = 10;

	printf("are %d %d %d\n", height, weight, width);
	
	//Printing extensions
	
	printf("value is: %d\n", height * width * weight);
	//Each %d is refered to each " item" after the string moment
	
	int age;
	
	printf("How old are you? ");
	
	// %d tells to scanf read an integer value
	scanf("%d/n ", &age);
	
	printf("You are %d old!\n", age);

	float size;
	
	printf("Is what your sze?");
	
	scanf("%f/n", &size);
	
	
	printf("Your height is %.1f!", size);


}



	
	
