#include <stdio.h>

unsigned test ( unsigned x);
unsigned bitcount (unsigned x);

int main (void) {
	printf("Input 0xFF = 1111 1111\n");
	printf("Bitcount1: %u\n", bitcount((unsigned)0xff));
	return 0;
}

unsigned test (unsigned x) {
	x &= (x - 1);
	return x;
}

unsigned bitcount (unsigned x) {
/*
	int b;

	for ( b = 0; x != 0; x >> 1) {
		if (x & 1)
			b++;
	}

	return b;
*/
	int b;

	for ( b = 0;  x != 0; x &= x-1 )
        	++b;

	return b;
}

/*
 * Explanation
 * x = 1111 & ( 1111 - 0001)
 * x = 1111 & 1110
 * x = 1110
 *
 * x = 1110 & (1110 - 0001)
 * x = 1110 & 1101
 * x = 1100 
 */
