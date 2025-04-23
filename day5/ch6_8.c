#include <stdio.h>

int main(){

	int weekday, days, start = 0;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	if (days!= 31 && days!=29 && days!= 30 && days!= 28)
		{printf("Accept only 31,30,29 and 28 \n"); return 0; }
	printf("Enter starting day of the week: ");
	scanf("%d", &weekday);
	if (weekday > 7 || weekday < 1)
		return 0;

	for (int i=0;i<8;i++){

		for (int j=1; j<=7; j++){

			if (start == days)
			{printf("%3d", days);break;}
			if (j == weekday && i == 0)
			{start++;}
			if (start == 0)
			 {printf("   "); continue;}
			
			printf("%3d", start++);
		}
		if (start == days)
		{printf("\n monthly calendar \n"); break;}
		printf("\n");
	}
}
