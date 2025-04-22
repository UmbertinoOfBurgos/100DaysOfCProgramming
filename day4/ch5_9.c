#include <stdio.h>

int main(void){

	int d1, m1, y1, d2, m2, y2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m2, &d2, &y2);
	if (y2 < y1)
		printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", m2,d2,y2,m1,d1,y1);
	else if (y2 > y1)
		printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", m1,d1,y1,m2,d2,y2);
	if (y2 = y1){
		if (m2 < m1)
			printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", m2,d2,y2,m1,d1,y1);
		else if (m2 > m1)
			printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", m1,d1,y1,m2,d2,y2);
	if (y2==y1 && m2==m1){
		if (d2 < d1)
			printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", m2,d2,y2,m1,d1,y1);
		else if (d2 > d1)
			printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", m1,d1,y1,m2,d2,y2);
		else
			printf("dates are same same\n");
	}
}
}
