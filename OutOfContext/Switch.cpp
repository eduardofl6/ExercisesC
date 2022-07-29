//Switch
#include <stdio.h>
#include <stdbool.h>

int main(void)
{

int grade;

printf("Did you like the service? Give us your note(1 to 5): " );
scanf("%d", &grade);
printf("Our service was: ");
switch (grade)
{
case 1: printf("Horrible\n");
		break;
case 2: printf("Bad\n");
		break;
case 3: printf("Medium\n");
		break;	
case 4: printf("Good\n");
		break;
case 5: printf("Excellent\n");
		break;
default: printf("Note doesn't exist\n");
		break;
}

//Default: a case that doesn't exist in the defined cases. Isn't necessary, without it the switch just passes to the next statment after switch	
//Break: serves to stop the break/stop/end the statment, if not appear, the later case is part of the statment without break.
//Switch is used like a cascaded if	statments.
int password;
printf("Enter the password( 0 to 4)");
scanf("%d",&password);

switch (password)
{
case 1: case 2: case 3: case 4:
		printf("Wrong");
		break;
case 0:	printf("Right answear");
		break;
default: printf("Invalid grade");
		break;
		
}

}
