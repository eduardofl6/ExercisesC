//Weight of a box

#include <stdio.h>

int main(void){
	
int height, width, weight, volume, lenght;

	printf("Enter the Height: ");
scanf("%d", &height);

	printf("Enter the Lenght: ");
scanf("%d", &lenght);

	printf("Enter the Width: ");
scanf("%d", &width);

volume = lenght * width * lenght;
weight = (volume + 165) / 166;

printf("The volume of the box is: %d\n", volume);
printf("The volume of the box is: %d", weight);

	
/* 																	
The "\n" isn't necessary because when the user press enter to confirm the value,
the cursor moves automatically to the new-line.	
	*/


return 0;


}
