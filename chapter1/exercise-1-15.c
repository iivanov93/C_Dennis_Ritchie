#include <stdio.h>

	/* print Fahrenheit-Celsius table */

float farcel(int fahr);

int main() {
	int fahr;
 
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, farcel(fahr));
	
	return 0;
}

float farcel(int fahr) {
	return ((5.0 / 9.0) * (fahr - 32));
}
