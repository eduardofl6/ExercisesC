//Product Information

#include <stdio.h>

int main(void)
{

int d, m ,y , item;
float price;	

printf("Enter the item number: ");
scanf("%d",&item);

printf("Enter item price: ");
scanf("%f", &price);

printf("Enter the date: ");
scanf("%d/%d/%d", &m, &d, &y);


printf("\n|Item number|\t|Item Price|\t|Date|\n|%d |\t\t|$%.2f |\t|%-2d/%-2d/%-4d|", item, price, m, d, y);
}
