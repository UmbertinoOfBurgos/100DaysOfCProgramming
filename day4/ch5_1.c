/* Chapter 5: Selection statements */

// Program 1

#include <stdio.h>

int main(void){
	
	int num;
	printf("Enter a number no more than four digits: :");
	scanf("%d", &num);
	if (0 <= num && num <= 9)
		printf("The number has a single digit\n");
	if (10 <= num && num <=99)
		printf("The number has two digits\n");
	if (100 <= num && num <= 999)
		printf("The number has 3 digits\n");
	if (1000 <= num && num <= 9999)
		printf("The number has 4 digits\n");
}
