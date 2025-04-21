/* K.N.King Book */

/* Program 2.1*/
/*
#include <stdio.h>

void main(){
	printf("       *\n");
	printf("      *\n");
	printf("     *\n");
	printf("*   *\n");
	printf(" * * \n");
	printf("  *  \n");
	
}
*/

/* Program 2.2 */

/*
#include <stdio.h>

void main(){
	printf("%f\n", (4.0f/3.0f)*10.0f*10.0f*10.0f);
}

*/

/* Program 2.3 */

/*
#include <stdio.h>

void main(){
	float r;
	printf("Enter the radius: ");
	scanf("%f", &r);
	printf("%f\n", (4.0f/3.0f)*r*r*r);
}
*/

/* Program 2.4*/

/*
#include <stdio.h>

void main(){
	float amount, taxed_amt;
	printf("Enter amount: ");
	scanf("%f", &amount);
	taxed_amt = amount + 0.05*amount;
	printf("With tax added: %.2f\n", taxed_amt);
}

*/


/* Program 2.6 */

/*
#include <stdio.h>

void main(){
	
	int x;
	printf("Enter x to evaluate polynomial: ");
	scanf("%d", &x);
	printf("%d\n", ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6);
}
*/

/* Program 2.7 */

/*
#include <stdio.h>

void main(){
	int amt, twenty, ten, five, one;
	printf("Enter the dollar amount: ");
	scanf("%d", &amt);
	twenty = (int)(amt / 20);
	ten = (int)((amt - twenty*20) / 10);
	five = (int)((amt - (twenty*20 + ten*10)) / 5);
	one = (amt - (twenty*20 + ten*10 + five*5));
	printf("$20 bills:%d \n", twenty);
	printf("$10 bills:%d \n", ten);
	printf("$5 bills:%d \n", five);
	printf("$1 bills:%d \n", one);

}

*/


/* Program 3.1 */
/*
#include <stdio.h>

void main(){
	int m,d,y;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d%d%d", &m, &d, &y);
	printf("You entered the date: %.4d%.2d%.2d \n", y,m,d);
}
*/


/* Program 4 */

/*
#include <stdio.h>

void main(){
	
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("Enter numbers from 1-16 in random order");
	scanf("%d\t%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
	printf("Row Sums: %d\t%d\t%d\t%d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p) ;
	printf("Column Sums: %d\t%d\t%d\t%d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
	printf("Diagonal Sums: %d\t%d\n", a+f+k+p, d+g+j+m);
}

*/

/* Program 6 */

#include <stdio.h>

void main(){
	int d1, d2, n1, n2;
	printf("Enter two fractions: ");
	scanf(" %d  %d  %d  %d", &n1, &d1, &n2, &d2);
	printf("You entered %d/%d + %d/%d\n", n1, d1, n2, d2);
	printf("The sum is: %d/%d\n", (n1*d2+n2*d1),(d1*d2));
}
