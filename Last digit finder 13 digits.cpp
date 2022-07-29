// 13-digit Code
#include <stdio.h>

int main(void)
{

int n1, a2, a3, a4, a5, a6, s7, s8, s9, s10, s11, n12, n13;
printf("[Last digit calculator]\nEnter the 12 digits code: ");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1, &a2, &a3, &a4, &a5, &a6, &s7, &s8, &s9, &s10, &s11, &n12);

n13 = a2 + a4 + a6  + s8 + s10 + n12;
n13 = n13 * 3 + n1 + a3 + a5 + s7 + s9 + s11;
n13--;
n13 %= 10;
n13 = 9 - n13;
printf("Check digit: %d",n13);


}
