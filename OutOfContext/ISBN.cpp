//ISBN identificator

#include <stdio.h>

int main(void)
{

int prefix, group, pub_code, item_num, check_dig;

printf("Enter the ISBN: ");
scanf("%d-%d-%d-%d-%d", &prefix, &group, &pub_code, &item_num, &check_dig);

printf("GS1 prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d",prefix, group, pub_code, item_num, check_dig);

}
