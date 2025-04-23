#include <stdio.h>
#include "gcd.h"

int main(){
    int n1, n2;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);

    int g1 = n1 / gcd(n1, n2); 
    int g2 = n2 / gcd(n1, n2);

    printf("In lowest terms: %d/%d\n", g1, g2);
    return 0;

}
