#include <stdio.h>

int main(void)
{
int n1, a2, a3, a4, a5, a6, s7, s8, s9, s10, s11, n12;

int group_one, group_two;


printf("[Last digit calculator]\nEnter the check-code: ");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &a2, &a3, &a4, &a5, &a6, &s7, &s8, &s9, &s10, &s11);

group_one = n1+a3+a5+s7+s9+s11;
group_two = a2+a4+a6+s8+s10;
n12 = 9 - ((((group_one * 3) + group_two) - 1) % 10);



printf("Twelv digit is: %d",n12);
}
