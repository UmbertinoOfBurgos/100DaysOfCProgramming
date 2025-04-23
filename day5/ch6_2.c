#include <stdio.h>
#include "gcd.h"

int main() {
    int m,n;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    printf("GCD is %d\n", gcd(m, n));
    return 0;
}
