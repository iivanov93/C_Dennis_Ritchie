/*
 Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
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

	printf("Celsius | Fahr \n");
	while ( fahr <= upper ) {
		celsius = 5.0f * (fahr-32.0f) / 9.0f;
		printf("%4.2f \t %4.2f\n",  celsius, fahr);
		fahr = fahr + step;
	}

	return 0;
}

