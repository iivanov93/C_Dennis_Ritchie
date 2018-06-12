#include <stdio.h>

int main (void) {
	char s[10];
	int lim = 10;
	int i = 0;
	int c;

	while ( i < lim - 1) {
		c = getchar();
		if ( c == EOF)
			break;
		if (c == '\n')
			break;

		s[i++] = c;
	}

	s[i] = '\0';

	return 0;
}
