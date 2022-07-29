//addfrac diferent

#include <stdio.h>

int main(void)
{
int num1, denom1, num2, denom2, result_num, result_denom;

printf("Some two fractions: ");
scanf("%d / %d + %d / %d", &num1, &denom2, &num2, &denom1);	

result_num = num1 * denom2 + num2 * denom1;
result_denom = denom1 * denom2;

printf("Result is: %d/%d", result_num, result_denom);

return 0;
}
