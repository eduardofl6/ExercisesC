#include <stdio.h>
#define PI 3.14159265359f


int main(void){

printf("       *\n      *\n     *\n*   *\n * *\n  *\n");

float s_r;

printf("Enter a radius of a sphere(meters): ");
scanf("%f", &s_r);

float volume_sphere = 4.0f/3.0f * PI * (s_r * s_r * s_r);

printf("This sphere volume is: %.2fM", volume_sphere);


}
