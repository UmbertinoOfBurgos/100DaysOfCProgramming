#include <stdio.h>

int main(){

	int n, k; float sum = 1, cur = 1, eps;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Enter epsilon: ");
	scanf("%g", &eps);
	k = 1;
	do{
		cur = 1;
		for(int i=1; i<=k;i++) {cur = cur*i;}
		sum = sum + (1/cur);
		printf("current: %g, sum:%g, steps: %d\n", 1/cur, sum,k);
		k++;
	}while( 1/cur>eps);

	printf("e equals: %.10g", sum);
}
