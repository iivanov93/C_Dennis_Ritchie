#include <stdio.h>

#define OUT 0
#define IN 1

int main (void) {
	int c;
	int state;

	while ( (c = getchar()) != EOF) {
		state = IN;

		if (c == ' ' || c == '\t')
			state = OUT;

		if (state != IN)
			c = '\n';

		putchar(c);
	}

	return 0;
}
