/* Program 4.4 
 * Used AI for this, did it in one shot
 */

#include <stdio.h>

int main(void) {
    int number, octal = 0, place = 1;

    // Prompt and read integer input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Convert to octal using arithmetic
    int d1 = (number / 8 / 8 / 8 / 8) % 8;
    int d2 = (number / 8 / 8 / 8) % 8;
    int d3 = (number / 8 / 8) % 8;
    int d4 = (number / 8) % 8;
    int d5 = number % 8;
    
    // Display in decimal and octal formats
    printf("Octal: %d%d%d%d%d\n", d1, d2, d3, d4, d5);

    return 0;
}

