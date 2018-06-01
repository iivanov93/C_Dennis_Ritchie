/*
 * Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0.0f;
	upper = 300.0f;
	step = 20.0f;

	/* lower limit of temperature scale */
	/* upper limit */
	/* step size */
	
	fahr = lower;

	printf("Fahr \t Celsius\n");
	while ( fahr <= upper ) {
		celsius = 5.0f * (fahr-32.0f) / 9.0f;
		printf("%4.2f\t%4.2f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

