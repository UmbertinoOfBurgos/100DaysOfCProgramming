/* Program 1
 *
 * Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 28
The reversal is: 82
Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
is the last digit in n and n / 10 is n with the last digit removed.

*/
/*
#include <stdio.h>

int main(void){
	int num, rev;
	printf("Enter a two digit number: ");
	scanf("%d", &num);
	rev = (10*(num%10)) + num/10;
	printf("The reversal is: %d\n", rev);
}
*/

/* Program 2
 *
 * Extend the program in Programming Project 1 to handle three-digit numbers.
 */

/*
#include <stdio.h>

int main(void){
        int num, rev;
        printf("Enter a three digit number: ");
        scanf("%d", &num);
        rev = (num/100) + ((num/10)%10)*10 + (num%10)*100;
        printf("The reversal is: %d\n", rev);
}

*/

/* Program 3
 *
 * Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits.

*/

#include <stdio.h>

int main(void){
	int n1, n2, n3;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);
	printf("The reversal is: %d%d%d\n", n3,n2,n1); 
	return 0;
}
