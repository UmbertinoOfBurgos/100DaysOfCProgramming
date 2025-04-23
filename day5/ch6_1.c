#include <stdio.h>

int main(void){

	float n1, n2, larg;
	printf("Enter a number: ");
	scanf("%g", &n1);

	while(n1 > 0){
		
		printf("Enter a number: ");
		scanf("%g", &n2);
		
		
		if(larg<n2){larg = n2;}

		n1 = n2;

	}

	printf("The largest number entered was: %g\n", larg);
}
