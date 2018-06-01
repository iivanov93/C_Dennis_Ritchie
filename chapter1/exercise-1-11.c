#include <stdio.h>

#define OUT 0
#define IN 1

int main (void) {
	int nc = 0, nl = 0, nw = 0;
	int c;
	int state;

	while ( (c = getchar()) != EOF ) {
		nc++;
		state = IN;
		
		if (c == '\n')
			nl++;
		if ( c == ' ' || c == '\n' || c == '\t')
			state = OUT;

			if (state == OUT)
				nw++;
	
		if ( c == '0')
			break;
	}

	printf("NC %d, NL %d NW %d\n", nc, nl, nw);

	return 0;
}
